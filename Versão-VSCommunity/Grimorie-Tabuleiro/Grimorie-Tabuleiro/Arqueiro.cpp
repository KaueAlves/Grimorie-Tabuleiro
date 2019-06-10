#include "stdafx.h"
#include "Arqueiro.h"

//Construtores 
Arqueiro::Arqueiro(pair<int, int> tamanho) :Peca(tamanho) {
	Atributos* atb = this->getAtributos();
	atb->setHP(2);
	atb->setDano(2);
	atb->setIniciativa(0);
	atb->setAlcance(2);
	atb->setTempoRecarga(0);

	this->setMark("A");
	this->especializacao = Tipo_Componentes::comp_peca;
}
Arqueiro::~Arqueiro() {}

//Fun��es
string Arqueiro::toString() {
	return this->getMark();
}

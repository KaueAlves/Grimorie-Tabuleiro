#include "../headers/Posicao.h"
#include "../headers/Peca.h"
#include "../headers/Default.h"
#include "../headers/pecas/Escudeiro.h"

//Construtores 
Escudeiro::~Escudeiro(){}
Escudeiro::Escudeiro(pair<int,int> tamanho):Peca(tamanho){
    this->setQntMaxMovimentos(3);
    this->setQntMovimentos(0);
    
    this->setMark("K");
    this->especializacao = Tipo_Componentes::comp_escudeiro;
}

//Funções
string Escudeiro::toString(){
    return this->getMark();
}
#include "../headers/Posicao.h"
#include "../headers/Peca.h"
#include "../headers/Default.h"
#include "../headers/pecas/Escudeiro.h"

//Construtores 
Escudeiro::~Escudeiro(){}
Escudeiro::Escudeiro(Posicao pos, pair<int,int> tamanho):Peca(pos,tamanho){
    this->setQntMaxMovimentos(3);
    this->setQntMovimentos(0);
    this->setSinal("K");
    this->especializacao = Tipo_Componentes::comp_escudeiro;
}

//Funções
string Escudeiro::toString(){
    return this->getSinal();
}
#include "../headers/Posicao.h"
#include "../headers/Peca.h"
#include "../headers/Default.h"
#include "../headers/Atributos.h"


//Construtores

Peca::Peca(pair<int,int> tamanho):Componente(1,"Peca","Peca",make_pair(1,1)){
    this->mark = "P";
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_peca;
};
Peca::~Peca(){}

//Gets

int Peca::getQntMaxMovimetnos(){
    return this->qntMaxMovimentos;
}

int Peca::getQntMovimentos(){
    return this->qntMovimentos;
}

Info Peca::getInfo(){
    return this->info;
}

Atributos* Peca::getAtributos(){
    return &this->atributos;
}

//Sets

void Peca::setQntMaxMovimentos(int qntMaxMovimentos){
    this->qntMaxMovimentos = qntMaxMovimentos;
}
void Peca::setQntMovimentos(int qntMovimentos){
    this->qntMovimentos = qntMovimentos;
}

void Peca::setAtributos(Atributos atb){
    this->atributos = atb;
}

//Funções 

bool movimentosPossiveis(Posicao pos){
    return false;
}

string Peca::toString(){
    return this->mark;
}

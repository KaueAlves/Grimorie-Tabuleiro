#include "../headers/Posicao.h"
#include "../headers/Peca.h"
#include "../headers/Default.h"


//Construtores
Peca::Peca(){};

Peca::Peca( Posicao pos, pair<int,int> tamanho){
    this->sinal = "-";
    this->pos = pos;
    this->tamanho = tamanho;
};

Peca::~Peca(){}

//Gets

Posicao Peca::getPosicao(){
    return this->pos;
}

int Peca::getQntMaxMovimetnos(){
    return this->qntMaxMovimentos;
}

int Peca::getQntMovimentos(){
    return this->qntMovimentos;
}

pair<int,int> Peca::getTamanho(){
    return this->tamanho;
}

string Peca::getSinal(){
    return this->sinal;
}

//Sets

void Peca::setPosicao(Posicao pos){
    this->pos = pos;
}
void Peca::setQntMaxMovimentos(int qntMaxMovimentos){
    this->qntMaxMovimentos = qntMaxMovimentos;
}
void Peca::setQntMovimentos(int qntMovimentos){
    this->qntMovimentos = qntMovimentos;
}
void Peca::setTamanho(pair<int,int> tamanho){
    this->tamanho = tamanho;
}
void Peca::setSinal(string sinal){
    this->sinal = sinal;
}

//Funções 

string Peca::toString(){
    return this->sinal;
}

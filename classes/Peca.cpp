#include "../headers/Posicao.h"
#include "../headers/Peca.h"
#include "../headers/default.h"

Peca::Peca(){};

Peca::Peca( Posicao pos, pair<int,int> tamanho){
    this->sinal = "-";
    this->pos = pos;
    this->tamanho = tamanho;
};

Peca::~Peca(){}

string Peca::toString(){
    return this->sinal;
}

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
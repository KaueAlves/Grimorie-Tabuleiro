#include "../headers/Tabuleiro.h"
#include "../headers/Posicao.h"
#include "../headers/Peca.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

Peca::Peca(){};

Peca::Peca( Posicao pos, Tabuleiro tab, pair<int,int> tamanho){
    this->pos = pos;
    this->tab = tab;
    this->tamanho = tamanho;
};

Peca::~Peca(){}

Posicao Peca::getPosicao(){
    return this->pos;
}

Tabuleiro Peca::getTabuleiro(){
    return this->tab;
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
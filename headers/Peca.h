#ifndef PECA_H
#define PECA_H

#include "Posicao.h"
#include "Tabuleiro.h"
#include <iostream>
using namespace std;

class Peca
{
private:
    Posicao pos;
    Tabuleiro tab;
    // Cor cor;
    int qntMovimentos, qntMaxMovimentos;
    pair<int,int> tamanho;
public:
    Peca();
    Peca( Posicao pos, Tabuleiro tab, pair<int,int> tamanho);
    ~Peca();
    Posicao getPosicao();
    Tabuleiro getTabuleiro();
    int getQntMaxMovimetnos();
    int getQntMovimentos();
    pair<int,int> getTamanho();
};

#endif
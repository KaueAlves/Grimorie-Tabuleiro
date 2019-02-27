#ifndef PECA_H
#define PECA_H

#include "default.h"
#include "Posicao.h"

using namespace std;

class Peca
{
private:
    string sinal;
    Posicao pos;
    // Cor cor;
    int qntMovimentos, qntMaxMovimentos;
    pair<int,int> tamanho;
public:
    Peca();
    Peca( Posicao pos, pair<int,int> tamanho);
    ~Peca();
    string toString();
    Posicao getPosicao();
    int getQntMaxMovimetnos();
    int getQntMovimentos();
    pair<int,int> getTamanho();
};

#endif
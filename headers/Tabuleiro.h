#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "default.h"
#include "Posicao.h"
#include "Peca.h"
// #include "Peca.h"

class Tabuleiro
{
private:
    int x,y,z;
    vector<vector<vector<Peca>>> tabuleiro_peca;
    vector<vector<vector<int>>> tabuleiro_altura;
    vector<vector<vector<bool>>> tabuleiro_booleano;
public:
    int getX();
    int getY();
    int getZ();
    void montarMatrix();
    bool verificarCelula(Posicao pos);
    bool verificarPosicaoValida(Posicao pos);
    void toString();
    Tabuleiro();
    Tabuleiro(int x, int y, int z);
    ~Tabuleiro();
};

#endif
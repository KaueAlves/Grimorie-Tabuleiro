#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <vector>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Posicao.h"
using namespace std;
class Tabuleiro
{
private:
    int x,y,z;
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
    Tabuleiro(int x, int y, int z);
    ~Tabuleiro();
};

#endif
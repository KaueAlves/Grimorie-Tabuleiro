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
     //Construtores
    Tabuleiro();
    Tabuleiro(int x, int y, int z);
    ~Tabuleiro();
    //Gets
    int getX();
    int getY();
    int getZ();
    //Funções
    void montarMatrix();
    bool verificarOcupacao(Posicao pos);
    bool verificarPosicaoValida(Posicao pos);
    bool adicionarPeca(Posicao pos, Peca peca);
    Peca removerPeca(Posicao pos);
    string toString();
};

#endif
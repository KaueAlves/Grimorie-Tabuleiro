#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"
#include "Peca.h"
#include "Componente.h"

class Tabuleiro
{
private:
    int x,y,z;
    map<string,Componente*> tab_comp;
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
    map<string, Componente*> getTabComp();
    // Sets
    void setTabComp(map<string, Componente*>);
    //Funções
    void montarMatrix();
    bool verificarOcupacao(Posicao pos);
    bool verificarPosicaoValida(Posicao pos);
    bool adicionarPeca(Posicao pos, Componente *componente);
    string definirComponente(Componente* componente);
    bool removerPeca(Posicao pos);
    string toString();
};

#endif
#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"
#include "Peca.h"
#include "Componente.h"
#include "Terreno.h"

class Tabuleiro
{
private:
    int x,y,z;
    map<string, Componente*> tab_comp;
    map<string, Peca*> tab_pecas;
    map<string, Terreno*> tab_terrenos;
    // map<string, Obstaculos*> tab_obstaculos;
    // map<string, Item> tab_itens;
    vector<vector<vector<Peca>>> tabuleiro_peca;
    vector<vector<vector<int>>> tabuleiro_altura;
    vector<vector<vector<int>>> tabuleiro_tipo_componentes;
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
    Componente* removerPeca(Posicao pos);
    bool moverPeca(Posicao ini, Posicao end);
    string definirComponente(Componente* componente);
    void adicionarMapEspecifico(Componente* componente);
    void removerMapEspecifico(Componente* componente);
    Componente* verificarPeca(Posicao pos);

    string toString();
};

#endif
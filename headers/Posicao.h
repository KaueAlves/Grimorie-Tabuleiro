#ifndef POSICAO_H
#define POSICAO_H

#include "default.h"

class Posicao
{
private:
    int x,y,z;
public:
    // Construtores
    Posicao();
    Posicao(int x, int y, int z);
    ~Posicao();
    // Gets
    int getX();
    int getY();
    int getZ();
    // Funções
    string to_mapkey();
};

#endif
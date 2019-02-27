#ifndef POSICAO_H
#define POSICAO_H

#include "default.h"



class Posicao
{
private:
    int x,y,z;
public:
    Posicao();
    Posicao(int x, int y, int z);
    ~Posicao();
    int getX();
    int getY();
    int getZ();
};

#endif
#ifndef POSICAO_H
#define POSICAO_H

#include "Default.h"



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
    string toString();
};

#endif
#ifndef POSICAO_H
#define POSICAO_H

#include <vector>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

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
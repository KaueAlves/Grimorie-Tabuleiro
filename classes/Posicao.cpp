#include "../headers/Posicao.h"

Posicao::Posicao(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}

Posicao::~Posicao(){}

int Posicao::getX(){
    return this->x;
}

int Posicao::getY(){
    return this->y;
}

int Posicao::getZ(){
    return this->z;
}
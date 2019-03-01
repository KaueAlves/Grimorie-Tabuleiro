#include "../headers/Posicao.h"
#include "../headers/Default.h"

Posicao::Posicao(){
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

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

string Posicao::to_mapkey(){
    return std::to_string(this->x)+std::to_string(this->y)+std::to_string(this->z);
}
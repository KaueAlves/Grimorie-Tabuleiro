#include "../headers/Tabuleiro.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

Tabuleiro::Tabuleiro(int x, int y, int z){
    this->tam_x = x;
    this->tam_y = y;
    this->tam_z = z;
};

void Tabuleiro::toString(){
    cout << this->tam_x << endl;
    cout << this->tam_y << endl;
    cout << this->tam_z << endl;
};

Tabuleiro::~Tabuleiro(){};
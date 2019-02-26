#include "../headers/Tabuleiro.h"
#include "../headers/Posicao.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

Tabuleiro::Tabuleiro(){
    this->x = 8;
    this->y = 8;
    this->z = 1;  
}

Tabuleiro::Tabuleiro(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;  
};

Tabuleiro::~Tabuleiro(){};

int Tabuleiro::getX(){
    return this->x;
}

int Tabuleiro::getY(){
    return this->y;
}

int Tabuleiro::getZ(){
    return this->z;
}

void Tabuleiro::montarMatrix(){
    //Matriz altura
    vector<vector<vector<int>>> matriz_xyz;
    vector<vector<int>> matriz_yz;
    vector<int> matriz_z;
    // Matriz booleana
    vector<vector<vector<bool>>> matriz_bool_xyz;
    vector<vector<bool>> matriz_bool_yz;
    vector<bool> matriz_bool_z;

    for (size_t i = 0; i < this->x; i++)
    {
        for(size_t j = 0; j < this->y; j++)
        {
            for(size_t k = 0; k < this->z; k++)
            {
                matriz_z.push_back(k);
                matriz_bool_z.push_back(false);
            }
            matriz_yz.push_back(matriz_z);
            matriz_z.clear();

            matriz_bool_yz.push_back(matriz_bool_z);
            matriz_bool_z.clear();
        }
        matriz_xyz.push_back(matriz_yz);
        matriz_yz.clear();

        matriz_bool_xyz.push_back(matriz_bool_yz);
        matriz_bool_yz.clear();
    }
    this->tabuleiro_altura = matriz_xyz;
    this->tabuleiro_booleano = matriz_bool_xyz;
}

bool Tabuleiro::verificarCelula(Posicao pos){
    try
    {
        if(this->verificarPosicaoValida(pos)){
            return this->tabuleiro_booleano[pos.getX()][pos.getY()][pos.getZ()];
        }else{
            throw 101;
        }
    }
    catch (int e)
    {
        cout << "Posicao invalida - Posicao com X, Y, ou Z divergentes do esperado." << endl;
    }
}

bool Tabuleiro::verificarPosicaoValida(Posicao pos){
    if(pos.getX() < this->x && pos.getY() < this->y && pos.getZ() < this->z ){
        return true;
    }else{
        return false;
    }
}

void Tabuleiro::toString(){
    int altura = 0;
    for(auto&& i : this->tabuleiro_altura)
    {   
        for(auto&& j : i)
        {
            for(auto&& k : j)
            {
                altura++;
            }
            cout << altura << " ";
            altura = 0;
        }
        cout << endl;
    }
    
}


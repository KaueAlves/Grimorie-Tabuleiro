#include "../headers/Tabuleiro.h"
#include "../headers/Posicao.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

Tabuleiro::Tabuleiro(int x, int y, int z){
    this->tam_x = x;
    this->tam_y = y;
    this->tam_z = z;  
};

Tabuleiro::~Tabuleiro(){};

void Tabuleiro::montarMatrix(){
    vector<vector<vector<int>>> vetor;
    vector<vector<int>> vetor_of_vector_bool;
    vector<int> vetor_bool;

    for (size_t i = 0; i < 10; i++)
    {
        for(size_t j = 0; j < 10; j++)
        {
            for(size_t k = 0; k < 10; k++)
            {
                vetor_bool.push_back(k);
            }
            vetor_of_vector_bool.push_back(vetor_bool);
            vetor_bool.clear();
        }
        vetor.push_back(vetor_of_vector_bool);
        vetor_of_vector_bool.clear();
    }
    this->tabuleiro_altura = vetor;
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
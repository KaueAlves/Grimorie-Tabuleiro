#include "../headers/Default.h"
#include "../headers/Posicao.h" 
#include "../headers/Componente.h" 

// Construtores
Componente::Componente(){}
Componente::~Componente(){}
Componente::Componente(int id, string nome){
    this->id = id;
    this->nome = nome;
}

// Gets
string Componente::getNome(){
    return  this->nome;
}

int Componente::getID(){
    return this->id;
}

// Sets
void Componente::setNome(string nome){
    this->nome = nome;
}
void Componente::setID(int id){
    this->id = id;
}
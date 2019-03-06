#include "../headers/Componente.h"
Componente::Componente(int id,string nome, string tipo){
    this->id = id;
    this->nome = nome;
    this->tipo = tipo;
    this->especializacao = Tipo_Componentes::comp_componente;
}

Componente::~Componente(){};

int Componente::getID(){
    return this->id;
}

string Componente::getNome(){
    return this->nome;
}

string Componente::getTipo(){
    return this->tipo;
}

Posicao Componente::getPosicao(){
    return this->pos;
}

void Componente::setID(int id){
    this->id = id;
}

void Componente::setNome(string nome){
    this->nome = nome;
}

void Componente::setTipo(string tipo){
    this->tipo = tipo;
}

void Componente::setTipos(Tipo_Componentes tipo){
    this->especializacao = tipo;
}

string Componente::toString(){
    string output = "Componente: ";
    output += to_string(id);
    output += "- " + this->nome;
    output += "- " + this->tipo;
    return output;
}

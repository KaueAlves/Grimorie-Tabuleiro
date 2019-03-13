#include "../headers/Atributos.h"
#include "../headers/default.h"
#include "../headers/Item.h"

Atributos::Atributos(){
    this->hp = 100;
    this->sp = 50;
    this->forca = 5;
    this->destreza = 5;
    this->inteligencia = 5;
}

Atributos::Atributos(vector<int> atributos_valores){
    this->hp = atributos_valores[0];
    this->sp = atributos_valores[1];
    this->forca = atributos_valores[2];
    this->destreza = atributos_valores[3];
    this->inteligencia = atributos_valores[4];
}

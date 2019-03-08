#include "../headers/default.h"
#include "../headers/Item.h"
#include "../headers/Posicao.h"
#include "../headers/Componente.h"

Item::Item(/* args */) : Componente(2,"Item","Item",make_pair(1,1))
{
    this->mark = "T";
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_terreno;
}

Item::~Item()
{
}

string Item::toString(){
    return this->mark;
}
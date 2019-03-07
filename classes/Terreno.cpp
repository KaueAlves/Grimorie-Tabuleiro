#include "../headers/default.h"
#include "../headers/Terreno.h"
#include "../headers/Posicao.h"
#include "../headers/Componente.h"

Terreno::Terreno(/* args */) : Componente(2,"Terreno","Terreno",make_pair(1,1))
{
    this->mark = "T";
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_terreno;
}

Terreno::~Terreno()
{
}

string Terreno::toString(){
    return this->mark;
}
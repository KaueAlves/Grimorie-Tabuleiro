#include "../headers/Jogo.h"

Jogo::Jogo(Tabuleiro tab)
{
    this->tab = tab;
}

Jogo::~Jogo()
{
}

Tabuleiro Jogo::getTabuleiro(){
    return this->tab;
}
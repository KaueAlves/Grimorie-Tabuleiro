#include "headers/Default.h"
#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Terreno.h"
#include "headers/Peca.h"
#include "headers/pecas/Guerreiro.h"
#include "headers/pecas/Mago.h"
#include "headers/pecas/Arqueiro.h"

int main(){

    unique_ptr<Tabuleiro> tab(new Tabuleiro(12,3,1));
    unique_ptr<Guerreiro> guer(new Guerreiro(make_pair(1,1)));
    unique_ptr<Mago> mago(new Mago(make_pair(1,1)));
    unique_ptr<Arqueiro> arqu(new Arqueiro(make_pair(1,1)));
    tab->montarMatrix();

    //tab->adicionarPeca( Posicao(0,0,0), guer );
    //tab->adicionarPeca( Posicao(0,0,0), mago );
    //tab->adicionarPeca( Posicao(0,0,0), arqu );

    system("pause");
    return 0;
}


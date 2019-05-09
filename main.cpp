#include "headers/Default.h"
#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Terreno.h"
#include "headers/Peca.h"
#include "headers/pecas/Guerreiro.h"
#include "headers/pecas/Mago.h"
#include "headers/pecas/Arqueiro.h"

int main(){

    shared_ptr<Tabuleiro> tab(new Tabuleiro(12,3,1));
    shared_ptr<Guerreiro> guer(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu(new Arqueiro(make_pair(1,1)));
    shared_ptr<Guerreiro> guer2(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago2(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu2(new Arqueiro(make_pair(1,1)));
    tab->montarMatrix();

    tab->adicionarPeca( Posicao(0,0,0), guer );
    tab->adicionarPeca( Posicao(0,1,0), mago );
    tab->adicionarPeca( Posicao(0,2,0), arqu );
    tab->adicionarPeca( Posicao(1,0,0), guer );
    tab->adicionarPeca( Posicao(1,1,0), mago );
    tab->adicionarPeca( Posicao(1,2,0), arqu );

    cout << tab->toString();

    system("pause");
    return 0;
}


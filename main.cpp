#include "headers/Default.h"
#include "headers/grimorieCore.h"

int main(){

    // Tabuleiro
    shared_ptr<Tabuleiro> tab(new Tabuleiro(12,3,1));
    // Time 1
    shared_ptr<Guerreiro> guer1(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago1(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu1(new Arqueiro(make_pair(1,1)));
    shared_ptr<Guerreiro> guer11(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago11(new Mago(make_pair(1,1)));

    // Time 2
    shared_ptr<Guerreiro> guer2(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago2(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu2(new Arqueiro(make_pair(1,1)));
    shared_ptr<Mago> mago22(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu22(new Arqueiro(make_pair(1,1)));


    // Monta o Tabuleiro
    tab->montarMatrix();

    // Adiciona o time 1
    tab->adicionarPeca( Posicao(0,0,0), guer1 );
    tab->adicionarPeca( Posicao(0,1,0), mago1 );
    tab->adicionarPeca( Posicao(0,2,0), arqu1 );
    tab->adicionarPeca( Posicao(1,1,0), guer11 );
    tab->adicionarPeca( Posicao(1,2,0), mago11 );

    // Adiciona o time 2
    tab->adicionarPeca( Posicao(10,0,0), guer2 );
    tab->adicionarPeca( Posicao(10,1,0), mago2 );
    tab->adicionarPeca( Posicao(11,0,0), arqu2 );
    tab->adicionarPeca( Posicao(11,1,0), mago2 );
    tab->adicionarPeca( Posicao(11,2,0), arqu2 );

    cout << tab->toString();

    system("pause");
    return 0;
}


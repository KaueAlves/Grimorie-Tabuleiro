#include "../headers/Jogo.h"

Jogo::Jogo(shared_ptr<Tabuleiro>& tab)
{
    this->tab = tab;
}

Jogo::~Jogo()
{
}

shared_ptr<Tabuleiro> Jogo::getTabuleiro(){
    return this->tab;
}

void Jogo::colocarTime1(){
    shared_ptr<Guerreiro> guer1(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago1(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu1(new Arqueiro(make_pair(1,1)));
    shared_ptr<Guerreiro> guer11(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago11(new Mago(make_pair(1,1)));

    this->getTabuleiro()->adicionarPeca( Posicao(0,0,0), guer1 );
    this->getTabuleiro()->adicionarPeca( Posicao(0,1,0), mago1 );
    this->getTabuleiro()->adicionarPeca( Posicao(0,2,0), arqu1 );
    this->getTabuleiro()->adicionarPeca( Posicao(1,1,0), guer11 );
    this->getTabuleiro()->adicionarPeca( Posicao(1,2,0), mago11 );
}

void Jogo::colocarTime2(){
    shared_ptr<Guerreiro> guer2(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago2(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu2(new Arqueiro(make_pair(1,1)));
    shared_ptr<Mago> mago22(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu22(new Arqueiro(make_pair(1,1)));

    this->getTabuleiro()->adicionarPeca( Posicao(10,0,0), guer2 );
    this->getTabuleiro()->adicionarPeca( Posicao(10,1,0), mago2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,0,0), arqu2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,1,0), mago2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,2,0), arqu2 );
}

void Jogo::escolherTime1(){
    int opt;
    int x,y,z=0;
    shared_ptr<Guerreiro> guer1(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago1(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu1(new Arqueiro(make_pair(1,1)));

    for (int i = 0; i < 5; i++)
    {
        cout << endl << "Time 1" << endl;
        cout << "Escolha a classe:" << endl;
        cout << "1 - Arqueiro" << endl;
        cout << "2 - Mago" << endl;
        cout << "3 - Guerreiro" << endl;
        cin >> opt;

        cout << endl << "Time 1" << endl;
        cout << "Escolha a posicao, informe x y e z(0):" << endl;
        cin >> x;
        cin >> y;
        cin >> z;

        switch (opt)
        {   
        case 1:
            tab->adicionarPeca(Posicao(x,y,z),arqu1);
            break;
        case 2:
            tab->adicionarPeca(Posicao(x,y,z),mago1);
            break;
        case 3:
            tab->adicionarPeca(Posicao(x,y,z),guer1);
            break;
        
        default:
            cout << "Não soube escolher, escolha denovo." << endl;
            i--;
            break;
        }
    }


    
}

void Jogo::escolherTime2(){
    int opt;
    int x,y,z=0;
    shared_ptr<Guerreiro> guer1(new Guerreiro(make_pair(1,1)));
    shared_ptr<Mago> mago1(new Mago(make_pair(1,1)));
    shared_ptr<Arqueiro> arqu1(new Arqueiro(make_pair(1,1)));

    for (int i = 0; i < 5; i++)
    {
        cout << endl << "Time 2" << endl;
        cout << "Escolha a classe:" << endl;
        cout << "1 - Arqueiro" << endl;
        cout << "2 - Mago" << endl;
        cout << "3 - Guerreiro" << endl;
        cin >> opt;

        cout << endl << "Time 2" << endl;
        cout << "Escolha a posicao, informe x y e z(0):" << endl;
        cin >> x;
        cin >> y;
        cin >> z;

        switch (opt)
        {   
        case 1:
            tab->adicionarPeca(Posicao(x,y,z),arqu1);
            break;
        case 2:
            tab->adicionarPeca(Posicao(x,y,z),mago1);
            break;
        case 3:
            tab->adicionarPeca(Posicao(x,y,z),guer1);
            break;
        
        default:
            cout << "Não soube escolher, escolha denovo." << endl;
            i--;
            break;
        }
    }

}
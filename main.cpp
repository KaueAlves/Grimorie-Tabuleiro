#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <memory>
using namespace std;

int main(){

    unique_ptr<Tabuleiro> tab(new Tabuleiro(10,10,10));
    unique_ptr<Posicao> pos(new Posicao(0,0,0));

    cout << "Tabuleiro e Posicao Criados com Sucesso" << endl;  
    
    tab->montarMatrix();
    tab->toString();

    if(!tab->verificarCelula(*pos)){
        cout << "Nao tem nada" << endl;
    }
    system("Pause");
    return 0;
}
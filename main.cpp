#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    Tabuleiro tab = Tabuleiro(10,2,1);
    Posicao pos = Posicao(10,0,0);

    cout << "Tabuleiro e Posicao Criados com Sucesso" << endl;  
    
    tab.montarMatrix();
    tab.toString();

    if(!tab.verificarCelula(pos)){
        cout << "Nao tem nada" << endl;
    }
    system("Pause");
    return 0;
}
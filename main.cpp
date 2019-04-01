#include "headers/Default.h"
#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Terreno.h"
#include "headers/Peca.h"
#include "headers/pecas/Escudeiro.h"


int main(){

    unique_ptr<Tabuleiro> tab(new Tabuleiro(12,3,1));
    tab->montarMatrix();

    cout << tab->toString() << endl;


    system("pause");
    return 0;
}


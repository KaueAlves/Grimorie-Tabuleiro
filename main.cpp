#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Peca.h"
#include "headers/Default.h"
#include "headers/pecas/Escudeiro.h"

int main(){

    unique_ptr<Tabuleiro>   tab(new Tabuleiro(10,10,1));
    unique_ptr<Posicao>     pos(new Posicao(0,0,0));
    unique_ptr<Peca>        peca(new Peca(*pos,make_pair(1,1)));
    unique_ptr<Escudeiro>   escudeiro(new Escudeiro(*pos,make_pair(1,2)));

    cout << "Tabuleiro e Posicao Criados com Sucesso" << endl;  
    
    tab->montarMatrix();
    tab->toString();

    // if(!tab->verificarCelula(*pos)){
    //     cout << "Nao tem nada" << endl;
    // }

    return 0;
}
#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Peca.h"
#include "headers/Default.h"
#include "headers/pecas/Escudeiro.h"

int main(){

    shared_ptr<Tabuleiro>   tab( new Tabuleiro( 10,10,1 ) );
    Escudeiro* escudeiro = new Escudeiro( Posicao( 1,0,0 ),make_pair( 1, 1 ));
    
    tab->montarMatrix();
    cout << tab->toString() << endl;

    // tab->adicionarPeca(*pos,*escudeiro);
    tab->adicionarPeca( Posicao(1,0,0), escudeiro );
    tab->adicionarPeca( Posicao(2,0,0), escudeiro );
    tab->adicionarPeca( Posicao(3,0,0), escudeiro );
    tab->adicionarPeca( Posicao(4,0,0), escudeiro );
    tab->adicionarPeca( Posicao(5,0,0), escudeiro );
    tab->removerPeca(Posicao(5,0,0));

    cout << tab->toString() << endl;

    system("pause");
    return 0;
}
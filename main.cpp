#include "headers/Default.h"
#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Terreno.h"
#include "headers/Peca.h"
#include "headers/pecas/Escudeiro.h"


int main(){

    shared_ptr<Tabuleiro>   tab( new Tabuleiro( 10,10,1 ) );
    short int x,y,z,opt = 0;
    tab->montarMatrix();
 
    do
    {
        Posicao posaux = Posicao(x,y,z); 
        cout << "Escolha uma das opcoes. " << endl; 
        cout << "Menu: " << endl;
        cout << endl;
        cout << "1 - Colocar peca" << endl;
        cout << "2 - Ver tabuleiro" << endl;
        cout << "3 - Remover peca" << endl;
        cin >> opt;

        switch(opt)
        {
            case 1:
                cin >> x >> y >> z;
                posaux = Posicao(x,y,z);
                tab->adicionarPeca(posaux,new Peca(make_pair(1,1)));
                cout << "Voce colocou uma peca" << endl;
                break;
            case 2: 
                cout << tab->toString() << endl;
                break;
            case 3: 
                cout << "Voce retirou uma peca" << endl;  
                break;
            default:
                cout << "Fechando programa" << endl;
                break;
        }




    } while (opt != 0);
    

    system("pause");
    return 0;
}
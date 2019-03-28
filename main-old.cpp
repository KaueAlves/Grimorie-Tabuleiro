#include "headers/Default.h"
#include "headers/Tabuleiro.h"
#include "headers/Posicao.h"
#include "headers/Terreno.h"
#include "headers/Peca.h"
#include "headers/pecas/Escudeiro.h"


int main(){

    shared_ptr<Tabuleiro>   tab( new Tabuleiro( 10,10,1 ) );
    short int x1,y1,z1,x2,y2,z2,opt = 0;
    tab->montarMatrix();
    Componente* comp;
 
    // do
    // {
    //     Posicao posaux = Posicao(x1,y1,z1); 
    //     cout << endl << "Escolha uma das opcoes. " << endl; 
    //     cout << "Menu: " << endl;
    //     cout << endl;
    //     cout << "1 - Colocar peca" << endl;
    //     cout << "2 - Ver tabuleiro" << endl;
    //     cout << "3 - Remover peca" << endl;
    //     cout << "4 - Verificar peca" << endl;
    //     cout << "5 - Mover peca" << endl;
    //     cout << "0 - Fechar" << endl;
    //     cin >> opt;

    //     switch(opt)
    //     {
    //         case 1:
    //             cin >> x1 >> y1 >> z1;
    //             posaux = Posicao(x1,y1,z1);
    //             tab->adicionarPeca(posaux,new Peca(make_pair(1,1)));
    //             cout << "Voce colocou uma peca" << endl;
    //             break;
    //         case 2: 
    //             cout << tab->toString() << endl;
    //             break;
    //         case 3: 
    //             cin >> x1 >> y1 >> z1;
    //             posaux = Posicao(x1,y1,z1);
    //             tab->removerPeca(posaux);
    //             cout << "Voce retirou uma peca" << endl;  
    //             break;
    //         case 4:
    //             cout << endl << "Qual posicao deseja verificar ?";
    //             cin >> x1 >> y1 >> z1;
    //             posaux = Posicao(x1,y1,z1);
    //             comp = tab->verificarPeca(posaux);
    //             break;
    //         case 5:
    //             cout << endl << "Escolha a peca que deseja mudar (x,y,z) ";
    //             cin >> x1 >> y1 >> z1;
    //             cout << endl << "Escolha a nova posicao da peca (x,y,z) ";
    //             cin >> x2 >> y2 >> z2;
    //             tab->moverPeca(Posicao(x1,y1,z1),Posicao(x2,y2,z2));
    //             break;
    //         default:
    //             cout << "Fechando programa" << endl;
    //             break;
    //     }
    //     cout << endl;
    //     system("pause");
    //     system("cls");
    // } while (opt != 0);
    
    return 0;
}


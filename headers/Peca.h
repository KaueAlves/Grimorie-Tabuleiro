#ifndef PECA_H
#define PECA_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"

using namespace std;

class Peca : public Componente
{
private:
    // Cor cor;
    int qntMovimentos, qntMaxMovimentos;
public:
    //Construtor - Destruidor
    Peca(pair<int,int> tamanho);
    virtual ~Peca();
    
    //Gets
    int getQntMaxMovimetnos();
    int getQntMovimentos();

    //Sets
    void setQntMaxMovimentos(int qntMaxMovimentos);
    void setQntMovimentos(int qntMovimentos);


    //Funções
    string toString();
};

#endif
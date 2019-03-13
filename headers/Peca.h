#ifndef PECA_H
#define PECA_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"
#include "Atributos.h"
#include "Info.h"

using namespace std;

class Peca : public Componente
{
private:
    int qntMovimentos, qntMaxMovimentos;
    Info info;
    
    Atributos atributos;
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
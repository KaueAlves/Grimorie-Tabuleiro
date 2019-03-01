#ifndef PECA_H
#define PECA_H

#include "default.h"
#include "Posicao.h"
#include "Componente.h"

using namespace std;

class Peca : public Componente
{
private:
    string sinal;
    Posicao pos;
    // Cor cor;
    int qntMovimentos, qntMaxMovimentos;
    pair<int,int> tamanho;
public:
    //Construtor - Destruidor
    Peca();
    Peca( Posicao pos, pair<int,int> tamanho);
    ~Peca();
    
    //Gets
    Posicao getPosicao();
    int getQntMaxMovimetnos();
    int getQntMovimentos();
    pair<int,int> getTamanho();
    string getSinal();

    //Sets
    void setPosicao(Posicao pos);
    void setQntMaxMovimentos(int qntMaxMovimentos);
    void setQntMovimentos(int qntMovimentos);
    void setTamanho(pair<int,int> tamanho);
    void setSinal(string sinal);

    //Funções
    string toString();
};

#endif
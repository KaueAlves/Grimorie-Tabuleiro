#ifndef Escudeiro_H
#define Escudeiro_H

#include "../Default.h"
#include "../Peca.h"

class Escudeiro : public Peca
{
private:
    /* data */
public:
    Escudeiro();
    ~Escudeiro();
    Escudeiro(Posicao pos, pair<int,int> tamanho);
    string toString();
};

#endif
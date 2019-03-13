#if !defined(ATRIBUTOS_H)
#define ATRIBUTOS_H

#include "default.h"

class Atributos
{
private:
    int hp;
    int sp;
    int forca;
    int destreza;
    int inteligencia;
public:
    Atributos(/* args */);
    Atributos(vector<int> atributos_valores);
    // Atributos(vector<Item> item,vector<Status>);
    ~Atributos();
    // Gets
    int getForca();
    int getDestreza();
    int getInteligencia();
    // Sets
    void setForca();
    void setDestreza();
    void setInteligencia();
};


#endif // ATRIBUTOS_H

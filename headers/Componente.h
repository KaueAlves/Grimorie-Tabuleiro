#ifndef COMPONENTE_H
#define COMPONENTE_H

#include "Default.h"

class Componente
{
private:
    int id;
    string nome;
public:
    Componente(/* args */);
    ~Componente();
    Componente(int id, string nome);
    // Gets
    string getNome();
    int getID();
    // Sets 
    void setNome(string nome);
    void setID(int id);
};


#endif
<<<<<<< HEAD
#if !defined(COMPONENTE_H)
=======
#ifndef COMPONENTE_H
>>>>>>> ab077108dafc65a5fa2b9e1a8b3e9571ded931f4
#define COMPONENTE_H

#include "Default.h"

class Componente
{
private:
    int id;
    string nome;
<<<<<<< HEAD
    string tipo;
public:
    Tipo_Componentes especializacao;
    // Construtores
    Componente(int id,string nome, string tipo);
    virtual ~Componente();
    // Gets
    int getID();
    string getNome();
    string getTipo();
    // Sets
    void setID(int id);
    void setNome(string nome);
    void setTipo(string tipo);
    void setTipos(enum Tipo_Componentes);
    // Funçoes
    string toString();
};



#endif // COMPONENTE_H
=======
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
>>>>>>> ab077108dafc65a5fa2b9e1a8b3e9571ded931f4

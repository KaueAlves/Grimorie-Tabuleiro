#if !defined(COMPONENTE_H)
#define COMPONENTE_H

#include "Default.h"

class Componente
{
private:
    int id;
    string nome;
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

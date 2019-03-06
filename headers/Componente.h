#if !defined(COMPONENTE_H)
#define COMPONENTE_H

#include "Default.h"
#include "Posicao.h"

class Componente
{
protected:
    int id;
    string nome;
    string tipo;
    Posicao pos;
public:
    Tipo_Componentes especializacao;
    // Construtores
    Componente(int id,string nome, string tipo);
    virtual ~Componente();
    // Gets
    int getID();
    string getNome();
    string getTipo();
    Posicao getPosicao();
    // Sets
    void setID(int id);
    void setNome(string nome);
    void setTipo(string tipo);
    void setTipos(enum Tipo_Componentes);
    // Funçoes
    string toString();
};



#endif // COMPONENTE_H

#if !defined(JOGO_H)
#define JOGO_H

#include "default.h"
#include "GrimorieCore.h"

class Jogo
{
private:
    Tabuleiro tab;
public:
    Jogo(Tabuleiro tab);
    ~Jogo();

    Tabuleiro getTabuleiro();
};

#endif // JOGO_H

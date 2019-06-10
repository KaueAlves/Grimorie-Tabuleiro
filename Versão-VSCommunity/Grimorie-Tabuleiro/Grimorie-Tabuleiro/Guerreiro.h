#pragma once
#include "stdafx.h"
#include "Peca.h"

class Guerreiro : public Peca
{
private:
	/* data */
public:
	Guerreiro();
	~Guerreiro();
	Guerreiro(pair<int, int> tamanho);
	string toString();
};



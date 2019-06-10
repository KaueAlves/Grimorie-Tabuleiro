#pragma once
#include "stdafx.h"
#include "Peca.h"

class Arqueiro : public Peca
{
private:
	/* data */
public:
	Arqueiro();
	~Arqueiro();
	Arqueiro(pair<int, int> tamanho);
	string toString();
};


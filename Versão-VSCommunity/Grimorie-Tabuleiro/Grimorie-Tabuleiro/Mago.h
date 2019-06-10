#pragma once
#include "stdafx.h"
#include "Peca.h"

class Mago : public Peca
{
private:
	/* data */
public:
	Mago();
	~Mago();
	Mago(pair<int, int> tamanho);
	string toString();
};


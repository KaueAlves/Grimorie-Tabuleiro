#pragma once
#include "stdafx.h"
#include "Componente.h"

class Item : public Componente
{
private:
	/* data */
public:
	Item(/* args */);
	~Item();
	// Funções
	string toString();
};


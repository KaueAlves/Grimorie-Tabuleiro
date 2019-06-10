#pragma once
#include "stdafx.h"

class Posicao
{
private:
	int x, y, z;
public:
	// Construtores
	Posicao();
	Posicao(int x, int y, int z);
	~Posicao();
	// Gets
	int getX();
	int getY();
	int getZ();
	string toString();
};
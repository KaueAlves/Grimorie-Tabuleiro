#pragma once
#include "stdafx.h"
#include "Componente.h"
#include "Info.h"
#include "Atributos.h"
#include "Item.h"


class Peca : public Componente
{
private:
	int qntMovimentos, qntMaxMovimentos;
	Info info;
	Atributos atributos;
public:
	//Construtor - Destruidor
	Peca(pair<int, int> tamanho);
	virtual ~Peca();

	//Gets
	int getQntMaxMovimetnos();
	int getQntMovimentos();
	Info getInfo();
	Atributos* getAtributos();

	//Sets
	void setQntMaxMovimentos(int qntMaxMovimentos);
	void setQntMovimentos(int qntMovimentos);
	void setAtributos(Atributos atb);


	//Funções
	bool movimentosPossiveis(Posicao pos);
	string toString();
};
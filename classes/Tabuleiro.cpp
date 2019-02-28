#include "../headers/Tabuleiro.h"
#include "../headers/Posicao.h"
#include "../headers/Default.h"

// Construtores
Tabuleiro::Tabuleiro(){
    this->x = 8;
    this->y = 8;
    this->z = 1;  
}

Tabuleiro::Tabuleiro(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;  
};

Tabuleiro::~Tabuleiro(){};

//Gets
int Tabuleiro::getX(){
    return this->x;
}

int Tabuleiro::getY(){
    return this->y;
}

int Tabuleiro::getZ(){
    return this->z;
}

/*
*   Tabuleiro::adicionarPeca(Posicao pos, Peca peca)
*   Return: null
*   Descrição: Montagem de matriz, Booleana e Pecas
*/
void Tabuleiro::montarMatrix(){
    //Matriz Peca
    vector<vector<vector<Peca>>> matriz_xyz;
    vector<vector<Peca>> matriz_yz;
    vector<Peca> matriz_z;
    // Matriz Bool
    vector<vector<vector<bool>>> matriz_bool_xyz;
    vector<vector<bool>> matriz_bool_yz;
    vector<bool> matriz_bool_z;

    for (register int eixo_x = 0; eixo_x < this->x; eixo_x++)
    {
        for(register int eixo_y = 0; eixo_y < this->y; eixo_y++)
        {
            for(register int eixo_z = 0; eixo_z < this->z; eixo_z++)
            {
                matriz_z.push_back(Peca(Posicao(eixo_x,eixo_y,eixo_z),make_pair(1,1)));
                matriz_bool_z.push_back(false);
            }
            matriz_yz.push_back(matriz_z);
            matriz_z.clear();

            matriz_bool_yz.push_back(matriz_bool_z);
            matriz_bool_z.clear();
        }
        matriz_xyz.push_back(matriz_yz);
        matriz_yz.clear();

        matriz_bool_xyz.push_back(matriz_bool_yz);
        matriz_bool_yz.clear();
    }
    this->tabuleiro_peca = matriz_xyz;
    this->tabuleiro_booleano = matriz_bool_xyz;
}

/*
*   Tabuleiro::adicionarPeca(Posicao pos, Peca peca)
*   Param: objPosicao objPeca
*   Return: booleano
*   Descrição: Verifica se existe uma peça ocupando a posicao
*/
bool Tabuleiro::adicionarPeca(Posicao pos, Peca peca){
    if(this->verificarOcupacao(pos)){
        this->tabuleiro_booleano[pos.getX()][pos.getY()][pos.getZ()] = true;
        this->tabuleiro_peca[pos.getX()][pos.getY()][pos.getZ()] = peca;
        return true;
    }else{
        return false;
    }
}

/*
*   Tabuleiro::adicionarPeca(Posicao pos, Peca peca)
*   Param: objPosicao objPeca
*   Return: booleano
*   Descrição: Verifica se existe uma peça ocupando a posicao
*/
Peca Tabuleiro::removerPeca(Posicao pos){
    if(!this->verificarOcupacao(pos)){
        this->tabuleiro_booleano[pos.getX()][pos.getY()][pos.getZ()] = false;
        auto retirada = this->tabuleiro_peca[pos.getX()][pos.getY()][pos.getZ()] = Peca();
        return retirada;
    }else{
        cout << "Não existe peca nessa posição" << endl;
    }
}

/*
*   Tabuleiro::verificarPosicaoValida(Posicao pos)
*   Param: objPosicao
*   Return: booleano
*   Descrição: Verifica se a posição informada é contemplada por este tabuleiro
*/
bool Tabuleiro::verificarOcupacao(Posicao pos){
    if(this->verificarPosicaoValida(pos)){
        if(!this->tabuleiro_booleano[pos.getX()][pos.getY()][pos.getZ()]){
            return true; 
        }
    }
    cout << "Celula nao disponivel ou ocupada." << endl;
    cout << "Z: " << pos.getZ() << endl;
    cout << "X: " << pos.getX() << endl;
    cout << "Y: " << pos.getY() << endl << endl;
    return false;
}

/*
*   Tabuleiro::verificarPosicaoValida(Posicao pos)
*   Param: objPosicao
*   Return: booleano
*   Descrição: Verifica se a posição informada é contemplada por este tabuleiro
*/
bool Tabuleiro::verificarPosicaoValida(Posicao pos){
    if(pos.getX() < this->x && pos.getY() < this->y && pos.getZ() < this->z ){
        return true;
    }else{
        return false;
    }
}

/*
*   Tabuleiro::toString()
*   Return @string
*   Descrição: Para cada nivel de Z, leia as posições X e Y
*/
string Tabuleiro::toString(){
    int level = 0;
    string output;
    for(register int eixo_z = 0; eixo_z < this->z; eixo_z++)
    {
        output += "Level:" + to_string(++level) + "\n";
        for(register int eixo_x = 0; eixo_x < this->x; eixo_x++)
        {
            for(register int eixo_y = 0; eixo_y < this->y; eixo_y++)
            {
                output += this->tabuleiro_peca[eixo_x][eixo_y][eixo_z].getSinal() + " ";
            }
            output += "\n";
        }
    }
    return output;
}


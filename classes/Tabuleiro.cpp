#include "../headers/Tabuleiro.h"
#include "../headers/Posicao.h"
#include "../headers/Terreno.h"
#include "../headers/Componente.h"
#include "../headers/Default.h"
#include "../headers/Peca.h"
#include "../headers/pecas/Escudeiro.h"

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

map<string,Componente*> Tabuleiro::getTabComp(){
    return this->tab_comp;    
}
// Sets

void Tabuleiro::setTabComp(map<string, Componente*> tab_comp){
    this->tab_comp = tab_comp;
}

void Tabuleiro::montarMatrix(){
    // Matriz Bool
    vector<vector<vector<int>>> matriz_tipos_xyz;
    vector<vector<int>> matriz_tipos_yz;
    vector<int> matriz_tipos_z;

    for (register int eixo_x = 0; eixo_x < this->x; eixo_x++)
    {
        for(register int eixo_y = 0; eixo_y < this->y; eixo_y++)
        {
            for(register int eixo_z = 0; eixo_z < this->z; eixo_z++)
            {
                matriz_tipos_z.push_back(0);
            }

            matriz_tipos_yz.push_back(matriz_tipos_z);
            matriz_tipos_z.clear();
        }

        matriz_tipos_xyz.push_back(matriz_tipos_yz);
        matriz_tipos_yz.clear();
    }
    this->tabuleiro_tipo_componentes = matriz_tipos_xyz;
}

/*
*   Tabuleiro::adicionarPeca(Posicao pos, Peca peca)
*   Param: objPosicao objPeca
*   Return: booleano
*   Descrição: Verifica se existe uma peça ocupando a posicao
*/
bool Tabuleiro::adicionarPeca(Posicao pos, Componente* componente){
    if(this->verificarOcupacao(pos)){
        componente->setPosicao(pos);
        this->tabuleiro_tipo_componentes[pos.getX()][pos.getY()][pos.getZ()] = componente->especializacao;
        this->tab_comp.insert(make_pair(pos.toString(),componente));
        adicionarMapEspecifico(componente);
        return true;
    }else{
        cout << "Nao foi possivel adicionar uma peca na posicao " << pos.toString() << endl;
        return false;
    }
}

/*
*   Tabuleiro::removerPeca(Posicao pos)
*   Param: objPosicao
*   Return: booleano
*   Descrição: remove uma peca do tabuleiro
*/
Componente* Tabuleiro::removerPeca(Posicao pos){
    if(!this->verificarOcupacao(pos)){
        Componente* peca = this->tab_comp[pos.toString()];
        this->tabuleiro_tipo_componentes[pos.getX()][pos.getY()][pos.getZ()] = 0;
        removerMapEspecifico(tab_comp[pos.toString()]);
        this->tab_comp.erase(pos.toString());
        return peca;
    }else{
        cout << "Não existe peca nessa posição" << endl;
        return NULL;
    }
}

/*
*   Tabuleiro::moverPeca(Posicao pos)
*   Param: objPosicao
*   Return: booleano
*   Descrição: remove uma peca do tabuleiro
*/
bool Tabuleiro::moverPeca(Posicao ini, Posicao end){
    if(!this->verificarOcupacao(ini)){
        Componente* comp_aux = this->removerPeca(ini);
        adicionarPeca(end,comp_aux);
        return true;
    }else{
        cout << endl <<  "Nao existe uma peca a ser movida" << endl;
    }
    return false;
}

/*
*   Tabuleiro::verificarPeca(Posicao pos)
*   Param: objPosicao
*   Return: booleano
*   Descrição: verifica uma peca no tabuleiro
*/
Componente* Tabuleiro::verificarPeca(Posicao pos){
    if(!this->verificarOcupacao(pos)){
        return this->tab_comp[to_string(pos.getX())+to_string(pos.getY())+to_string(pos.getZ())];
    }else{
        return NULL;
    }
}

/*
*   Tabuleiro::verificarOcupacao(Posicao pos)
*   Param: objPosicao
*   Return: booleano
*   Descrição: Verifica se a posição informada é contemplada por este tabuleiro
*/
bool Tabuleiro::verificarOcupacao(Posicao pos){
    if(this->verificarPosicaoValida(pos)){
        int aux = this->tabuleiro_tipo_componentes[pos.getX()][pos.getY()][pos.getZ()];
        if(aux == 0){
            return true; 
        }
    }
    // cout << "Celula nao disponivel ou ocupada." << endl;
    // cout << "Z: " << pos.getZ() << endl;
    // cout << "X: " << pos.getX() << endl;
    // cout << "Y: " << pos.getY() << endl << endl;
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
                if(this->tabuleiro_tipo_componentes[eixo_x][eixo_y][eixo_z] > 0){
                    output += definirComponente(this->tab_comp[to_string(eixo_x) + to_string(eixo_y) + to_string(eixo_z)]);
                }else{
                    output += "- ";
                }
            }
            output += "\n";
        }
    }
    return output;
}


string Tabuleiro::definirComponente(Componente* componente){
    const Tipo_Componentes aux = componente->especializacao;
    switch (aux)
    {
        case Tipo_Componentes::comp_peca :
            if(Peca *ptr = dynamic_cast<Peca*>(componente)){
                return ptr->toString() + " ";
            }
            break;
        case Tipo_Componentes::comp_terreno :
        if(Terreno *ptr = dynamic_cast<Terreno*>(componente)){
            return ptr->toString() + " ";
        }
        break;
        default:
                return componente->toString()+ " ";
            break;
    }
    return "X";
}

void Tabuleiro::adicionarMapEspecifico(Componente* componente){
    const Tipo_Componentes aux = componente->especializacao;
    switch (aux)
    {
        case Tipo_Componentes::comp_peca :
            if(Peca *ptr = dynamic_cast<Peca*>(componente)){
                this->tab_pecas.insert(make_pair(componente->getPosicao().toString(),ptr));
            }
            break;
        // case Tipo_Componentes::comp_itens :
        //     if(Peca *ptr = dynamic_cast<Peca*>(componente)){
        //         this->tab_itens.insert(make_pair(componente->getPosicao().toString(),ptr));
        //     }
        //     break;
        // case Tipo_Componentes::comp_obstaculos :
        //     if(Peca *ptr = dynamic_cast<Peca*>(componente)){
        //         this->tab_obstaculos.insert(make_pair(componente->getPosicao().toString(),ptr));
        //     }
        //     break;
        case Tipo_Componentes::comp_terreno :
            if(Terreno *ptr = dynamic_cast<Terreno*>(componente)){
                this->tab_terrenos.insert(make_pair(componente->getPosicao().toString(),ptr));
            }
            break;
        default:
                this->tab_comp.insert(make_pair(componente->getPosicao().toString(),componente));
            break;
    }
}

void Tabuleiro::removerMapEspecifico(Componente* componente){
    const Tipo_Componentes aux = componente->especializacao;
    switch (aux)
    {
        case Tipo_Componentes::comp_peca :
            if(Peca *ptr = dynamic_cast<Peca*>(componente)){
                this->tab_pecas.erase(ptr->getPosicao().toString());
            }
            break;
        // case Tipo_Componentes::comp_itens :
        //     if(Peca *ptr = dynamic_cast<Peca*>(componente)){
        //         this->tab_itens.erase(ptr->getPosicao().toString());
        //     }
        //     break;
        // case Tipo_Componentes::comp_obstaculos :
        //     if(Peca *ptr = dynamic_cast<Peca*>(componente)){
        //         this->tab_obstaculos.erase(ptr->getPosicao().toString());
        //     }
        //     break;
        // case Tipo_Componentes::comp_terrenos :
        //     if(Peca *ptr = dynamic_cast<Peca*>(componente)){
        //         this->tab_terrenos.erase(ptr->getPosicao().toString());
        //     }
        //     break;
        default:
                this->tab_comp.erase(componente->getPosicao().toString());
            break;
    }
}
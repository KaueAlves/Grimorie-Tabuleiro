#include <vector>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Tabuleiro
{
private:
    /* data */
public:
    int tam_x;
    int tam_y;
    int tam_z;
    vector<vector<vector<int>>> tabuleiro_altura;
    void montarMatrix();
    void toString();
    Tabuleiro(int x, int y, int z);
    ~Tabuleiro();
};


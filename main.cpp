#include "headers/Tabuleiro.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    Tabuleiro tab = Tabuleiro(10,2,1);
    tab.toString();

    system("Pause");
    return 0;
}
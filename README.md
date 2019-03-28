#Ideia inicial

O jogo consiste em uma luta direta entre 2 esquadrões de 5 pecas cada, em um tabuleiro de 3x12.
Os jogadores devem escolher para cada uma das pecas uma das 3 classes disponiveis ( Arqueiro, Guerreiro e Mago ).

Todas as pecas tem os seguintes atributos:

 - HP    - Pontos de vida
 - INIC  - Iniciativa
 - DANO  - Dano
 - VELO  - Tempo de Recarga
 - DIST  - Distancia do Ataque
 - PTSA  - Pontos de abate

## Arqueiros

 - HP    - 2
 - INIC  - 0
 - DANO  - 2
 - VELO  - 1
 - DIST  - 2
 - PTSA  - 0

## Magos

 - HP    - 4
 - INIC  - 0
 - DANO  - 6
 - VELO  - 1
 - DIST  - 3
 - PTSA  - 0

## Guerreiros

- HP    - 6
- INIC  - 0
- DANO  - 4
- VELO  - 1
- DIST  - 1
- PTSA  - 0


## Tabuleiro

O tabuleiro do jogo é simples, os campos " X " e " O " representam as posições inicias dos jogadores 1 e 2 respectivamente, enquanto o " - " representa o campo de batalha. 

X X X        
X X X
- - -
- - - 
- - -
- - -
- - -
- - - 
- - -
- - -
O O O
O O O

## Etapas do jogo

1  - Jogador1 escolhe as classes de suas peças
2  - Jogador2 escolhe as classes de suas peças 
3  - Jogador1 coloca as pecas em campo
4  - Jogador2 coloca as pecas em campo
<!-- O ideal é que as etapas acima sejam ocultas entre jogadores -->
5  - Ambos confirmam as escolhas
<!-- Inicio -->
6  - Verifica se existem pecas em campo
7  - Percorre o campo efetuando o movimento das peças
    7a - Inimigo no alcance ?
    7b - Podem atacar?
        7b1 - Tem tempo de recarga ?
    7c - Podem mover ?
    7d - Está no final ?
8  - Contabiliza os danos
9  - Contabiliza os pontos
10 - Repete o Processo
        




 
#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

printf("   1  2  3  4  5  6  7  8  9  10\n");// barra horizontal de numeros do tabuleiro;
printf(" --------------------------------");//barra horizontal abaixo dos numeros para formatar o tabuleiro;

//matriz do tabuleiro com zeros representando o mar ou seja, a matriz começa zerada sem nenhum navio;
    int tabuleiro[10][10] = {
      
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
    }; 
    
    
    
   //impressão das habilidades do tabuleiro;
    



    //impressão dos navios do tabuleiro;

    //NAVIO diagonal 1
    //loop para percorrer a diagonal primaria e posicionar o navio;
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
    if(i == j){
        tabuleiro[i][j] = 3;
        
    }
    }
}
    //NAVIO diagonal 2
    //loop para percorrer a diagonal secundária e posicionar o navio;
    for (int i = 2; i < 5; i++) {
        for (int j = 9; j > 6; j--) {
            if (i + j == 11) {
                tabuleiro[i][j] = 3;
            }
        }
    }
    //posicionando Navio horizontal;
    for(int i = 0; i < 1; i++){
    tabuleiro [0][5] = 3, tabuleiro[0][6] = 3, tabuleiro[0][7] = 3;
    }

    {
    //posicionando navio vertical;
    for(int i = 0; i < 1; i++)
    tabuleiro[8][3] = 3, tabuleiro[7][3] = 3, tabuleiro[6][3] = 3;
    }
    //impressão do tabuleiro;
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%c| ", 'A' + i);
        for (int j = 0; j < 10; j++) {
            printf("%-2d ", tabuleiro[i][j]);
        }
        printf("|\n");
    }
        
    }


    


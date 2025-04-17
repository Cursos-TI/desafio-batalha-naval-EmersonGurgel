#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


//função para sobrepor o tabuleiro com aas habilidades;
void Chamarhabilidade(int tabuleiro[10][10], int habilidade[3][5], int linha, int coluna)//recebe as matrizes tabuleiro, habilidade e as variaveis linhas e colunas que controlam o limite das matrizes;  
{
    for(int i = 0; i < 3; i++)//loop anininhado, sendo i e j para percorrer pela matriz habilidade
    {
        for(int j = 0; j < 5; j++)
        {
         if(habilidade[i][j] == 3) // procurando dentro da matriz habilidade, todos os indices igual a 3;
         {
            if(linha + i >= 0 && linha + i < 10 && coluna + j - 2 >= 0 && coluna + j - 2 < 10)//linhas e colunas percorrem pela matriz tabuleiro, definindo os limites de 0 a 9 para que os indices 3 não se sobreponham fora da matriz tabuleiro (- 2 para centralizar  a habildade no tabuleiro);
            {
                tabuleiro[linha + i][coluna + j - 2 ] = 5; // se estiver dentro dos limites será impresso o valor 5 nas respetivas posições designadas mais a frente no código;
              }
          }
        }
    }
}








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


// Definindo matrizes de habilidades
int habilidadeCone[3][5] = {
    {0, 0, 3, 0, 0},
    {0, 3, 3, 3, 0},
    {3, 3, 3, 3, 3}
};

int habilidadeCruz[3][5] = {
    {0, 0, 3, 0, 0},
    {3, 3, 3, 3, 3},
    {0, 0, 3, 0, 0}
};

int habilidadeOctaedro[3][5] = {
    {0, 0, 3, 0, 0},
    {0, 3, 3, 3, 0},
    {0, 0, 3, 0, 0}
};



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
    for (int i = 1; i < 4; i++) {
        for (int j = 9; j > 6; j--) {
            if (i + j == 10) {
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

// função recursiva que é chamada para sobrepor as habilidade no tabuleiro;
//void(matriz que vai ser sobreposta, habilidade que vai sobrepor, posição que vai se posicionar;);
    Chamarhabilidade(tabuleiro, habilidadeCone, 2, 4);
    Chamarhabilidade(tabuleiro, habilidadeCruz, 5, 7);
    Chamarhabilidade(tabuleiro, habilidadeOctaedro, 7, 1);


////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////


//                   =======                              ===========                          =============            ===================  
//                   N  Ã  O                              E  S  T  Á                           S  E  N  D  O             U  S  A  D  O 
//                   --------                             ------------                         --------------           -------------------


 // Impressão do tabuleiro
 printf("\n");

  /*
 for (int i = 0; i < 10; i++) {
     printf("%c| ", 'A' + i);
     for (int j = 0; j < 10; j++) {
         if (tabuleiro[i][j] == 0) {
             printf("0  "); // Água
         } else if (tabuleiro[i][j] == 3) {
             printf("3  "); // Navio
         } else if (tabuleiro[i][j] == 5) {
             printf("5  "); // Habilidade
         } else {
             printf("%-2d ", tabuleiro[i][j]); // Outros valores (se houver)
         }
     }
     printf("|\n");
 }
*/

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////


    
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


    


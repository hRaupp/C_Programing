#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

Criar uma matriz 20x20;
1)Preencher essa matriz(origem) com números aleatórios menores que 100.
2) Criar duas outras matrizes, uma chamada par e outra impar e iniciar as mesmas com zero..
3) Na matriz par, copiar os números pares da matriz origem nas mesmas posições que se encontram na matriz origem.
4)Na matriz impar, copiar os números ímpares da matriz origem nas mesmas posições que se encontram na matriz origem.
5) Exibir as três matrizes, seu nome e turma.
Postar o código e um print da tela exibindo o resultado.

*/

int main()
{
#define LINHAS 10
#define COLUNAS 10

        int mat_origem[LINHAS][COLUNAS];
        int mat_impar[LINHAS][COLUNAS];
        int mat_par[LINHAS][COLUNAS];

        srand(time(NULL));

        /// iniciando as impar e par com 0
        for (int linhas = 0; linhas < LINHAS; linhas++)
        {
                for (int colunas = 0; colunas < COLUNAS; colunas++)
                {

                        mat_par[linhas][colunas] = 0;
                        mat_impar[linhas][colunas] = 0;
                }
        }
        /// Colocando numeros aleatorios
        for (int linhas = 0; linhas < LINHAS; linhas++)
        {
                for (int colunas = 0; colunas < COLUNAS; colunas++)
                {

                        mat_origem[linhas][colunas] = rand() % 100;
                        // printf("%d \t", mat_origem[linhas][colunas]);
                }
                // printf("\n\n");
        }
        /// checando se é par

        for (int linhas = 0; linhas < LINHAS; linhas++)
        {
                for (int colunas = 0; colunas < COLUNAS; colunas++)
                {
                        if ((mat_origem[linhas][colunas]) % 2 == 0)
                                mat_par[linhas][colunas] = mat_origem[linhas][colunas];
                        else
                                mat_impar[linhas][colunas] = mat_origem[linhas][colunas];
                }
        }

        printf("\n\tMatriz origem\n");

        for (int colunas = 0; colunas < COLUNAS; colunas++)
        {
                for (int linhas = 0; linhas < LINHAS; linhas++)
                {
                        printf("\t%d", mat_origem[linhas][colunas]);
                }
                printf("\n");
        }

        printf("\n\tMatriz par\n");

        for (int colunas = 0; colunas < COLUNAS; colunas++)
        {
                for (int linhas = 0; linhas < LINHAS; linhas++)
                {
                        printf("\t%d", mat_par[linhas][colunas]);
                }
                printf("\n");
        }

        printf("\n\tMatriz impar\n");

        for (int colunas = 0; colunas < COLUNAS; colunas++)
        {
                for (int linhas = 0; linhas < LINHAS; linhas++)
                {
                        printf("\t%d", mat_impar[linhas][colunas]);
                }
                printf("\n");
        }

        return 0;
}

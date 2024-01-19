#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*

Faça um programa que leia uma matriz mat 3 x 4 de inteiros, substitua seus elementos
negativos por 0 e imprima a matriz mat original e a modificada.

*/

int main()
{

#define TAM_LIN 10
#define TAM_COL 10

    int mat[TAM_LIN][TAM_COL];
    int mat_r[TAM_LIN][TAM_COL];

    srand(time(NULL));

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            mat[linhas][colunas] = ((rand() % 201) - 100); /// gerando numeros de -100 a 100
            mat_r[linhas][colunas] = mat[linhas][colunas];
        }
    }
    /// printando a matriz aleatoria
    printf("\n\tmatriz aleatoria de -100 a 100\n\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            printf("\t%d", mat[linhas][colunas]);
        }
        printf("\n");
    }

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            if (mat[linhas][colunas] < 0)
                mat_r[linhas][colunas] = 0;
        }
    }

    /// printando a matriz aleatoria
    printf("\n\tmatriz 2\n\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            printf("\t%d", mat_r[linhas][colunas]);
        }
        printf("\n");
    }

    return 0;
}
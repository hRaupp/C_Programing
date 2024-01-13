#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

#define TAM_LIN 10
#define TAM_COL 5

    int mat1[TAM_LIN][TAM_COL];
    int transposta[TAM_COL][TAM_LIN];

    srand(time(NULL));

    /// Gerando numeros aleatorios
    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            mat1[linhas][colunas] = (rand() % 46) + 55; // Numeros de 55 a 100  /// Pega o numero total e subtrai o numero minimo, este resultado + 1 sera o divisor
            /// o resto da subtracao sera somado no fim da conta. assim teremos numeros de 55 a 100
        }
    }
    /// gerando a transposta
    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            transposta[colunas][linhas] = mat1[linhas][colunas];
        }
    }

    /// printando original
    printf("\nOriginal\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            printf("\t%d", mat1[linhas][colunas]);
        }

        printf("\n");
    }

    /// printando transposta
    printf("\ntansposta\n");

    for (int linhas = 0; linhas < TAM_COL; linhas++)
    {
        for (int colunas = 0; colunas < TAM_LIN; colunas++)
        {

            printf("\t%d", transposta[linhas][colunas]);
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/// Soma de matrizes

int main()
{

#define TAM_LIN 3
#define TAM_COL 5

    int mat_a[TAM_LIN][TAM_COL] = {{8, 76, 32, 42, 90},
                                   {5, 12, 68, 53, 89},
                                   {47, 61, 24, 17, 74}};

    int mat_b[TAM_LIN][TAM_COL] = {

        {60, 39, 82, 14, 79},
        {93, 37, 28, 41, 68},
        {7, 18, 55, 88, 20}

    };

    int mat_r[TAM_LIN][TAM_COL];

    /// Fazendo a soma
    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            mat_r[linhas][colunas] = mat_a[linhas][colunas] + mat_b[linhas][colunas];
        }
    }

    /// Printando matriz A
    printf("\n\t Matriz A\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            printf("\t%d", mat_a[linhas][colunas]);
        }
        printf("\n");
    }

    /// Printando matriz B

    printf("\n\t Matriz B\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            printf("\t%d", mat_b[linhas][colunas]);
        }
        printf("\n");
    }

    /// Printando matriz Resultante

    printf("\n\t Matriz Resultante\n");

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

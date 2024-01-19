#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

#define TAM_LIN 6
#define TAM_COL 6

    int mat[TAM_LIN][TAM_COL];

    int valor_max = 0;
    int linha_max, coluna_max;

    srand(time(NULL));

    /*
        /// deixando o usuario escrever os valores da matriz
        for (int linhas = 0; linhas < TAM_LIN; linhas++)
        {
            for (int colunas = 0; colunas < TAM_COL; colunas++)
            {

                printf("Digite o valor da linha %d coluna %d: ", linhas, colunas);
                scanf("%d", &mat[linhas][colunas]);
            }
        }
    */

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            mat[linhas][colunas] = (rand() % 200);
        }
    }

    valor_max = mat[0][0];
    linha_max = 0;
    coluna_max = 0;

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            if (mat[linhas][colunas] > valor_max)
            {

                valor_max = mat[linhas][colunas];
                linha_max = linhas;
                coluna_max = colunas;
            }
        }
    }

    /// Imprimindo a matriz
    printf("\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            printf("\t%d", mat[linhas][colunas]);
        }

        printf("\n");
    }

    printf("\n");

    printf("Valor maximo: %d\n", valor_max);
    printf("Linha maxima: %d\n", linha_max);
    printf("Coluna maxima: %d\n", coluna_max);

    return 0;
}
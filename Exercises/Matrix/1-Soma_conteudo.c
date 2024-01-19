#include <stdio.h>
/*

Elabore um programa que lê valores inteiros para uma matriz a[6][6]. Calcule, a seguir, a
soma dos elementos das colunas e linhas, escrevendo estes resultados num vetor. Escreva o
vetor resultante.

*/

int main()
{

#define TAM_LIN 3
#define TAM_COL 3

    int mat[TAM_LIN][TAM_COL];
    int soma[TAM_LIN + TAM_COL];

    /// atribuindo valores a matriz
    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            printf("Digite o numero da linha [%d] coluna[%d]: \n", linhas, colunas);
            scanf("%d", &mat[linhas][colunas]);
        }
    }

    // Zerando o veator

    for (int i = 0; i < TAM_COL + TAM_LIN; i++)
    {
        soma[i] = 1;
    }

    /// Fazendo a soma
    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            soma[linhas] += mat[linhas][colunas];
            
            soma[colunas + ((TAM_COL + TAM_LIN) / 2)]+= mat[linhas][colunas];
        }
    }

    /// printando a matriz
    printf("\nMatriz\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            printf("\t%d", mat[linhas][colunas]);
        }
        printf("\n");
    }

    for (int i = 0; i < TAM_LIN + TAM_COL; i++)
    {

        if (i < ((TAM_LIN + TAM_COL) / 2))
            printf("Linha %d: %d\n", i, soma[i]);

        else
            printf("coluna %d: %d\n", i - TAM_COL, soma[i]);
    }

    return 0;
}
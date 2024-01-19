#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

#define TAM_LIN 5
#define TAM_COL 3

    int mat[TAM_LIN][TAM_COL];
    int mat_ordenada[TAM_LIN][TAM_COL];
    int vet[TAM_LIN * TAM_COL];
    int cont = 0;

    int memoria = 0;

    srand(time(NULL));

    /// Gerando numeros aleatorios
    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            mat[linhas][colunas] = (rand() % 11);
        }
    }

    /// transformando matriz em vetor e printando ela

    printf("Matriz original\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            printf("\t%d", mat[linhas][colunas]);
            vet[cont++] = mat[linhas][colunas];
        }
        printf("\n");
    }

    /// Printando o vetor desordenado
    printf("\nVetor desordenado\n");

    for (int i = 0; i < TAM_COL * TAM_LIN; i++)
    {
        printf("\n");

        printf("%d", vet[i]);
    }

    for (int contador = 0; contador < TAM_COL * TAM_LIN; contador++)
    {
        for (int i = 0; i < (TAM_COL * TAM_LIN) - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {                         /// se a posiçao atual for maior que a proxima
                memoria = vet[i];     /// amrmazena maior valor, que estava na posicao atual
                vet[i] = vet[i + 1];  /// joga valor menor na posiçao atual.
                vet[i + 1] = memoria; /// joga valor maior pra proxima posiçao
            }
        }
    }

    /// Printando o vetor desordenado
    printf("\nVetor ordenado\n");

    for (int i = 0; i < TAM_COL * TAM_LIN; i++)
    {
        printf("\n");

        printf("%d", vet[i]);
    }

    /// passando o vetor pra matriz

    int numero = 0;

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {

            mat_ordenada[linhas][colunas] = vet[numero++];
        }
    }

    /// transformando matriz em vetor e printando ela

    printf("\nMatriz ordenadal\n");

    for (int linhas = 0; linhas < TAM_LIN; linhas++)
    {
        for (int colunas = 0; colunas < TAM_COL; colunas++)
        {
            printf("\t%d", mat_ordenada[linhas][colunas]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
#define NUM_LINHAS 5
#define NUM_COLUNAS 10 + 1

    char mapa[NUM_LINHAS][NUM_COLUNAS]; // 10+1 pq o ultimo caractere é o marcador de fim de linha

    FILE *f;

    f = fopen("mapa_jogo.txt", "r");
    if (f == 0)
    {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    for (int i = 0; i < NUM_LINHAS; i++)
    {

        fscanf(f, "%s", mapa[i]); // le a string do arquivo e armazena na linha do mapa // le a linha inteira e armazena
    }
    /*
        for (int i = 0; i < NUM_LINHAS; i++) // percorre a linha
        {
            for (int j = 0; j < NUM_COLUNAS; j++) // percorre a coluna
            {
                printf("%c", mapa[i][j]); // imprime o caractere da linha e da coluna
            }
            printf("\n"); // da enter nas linhas
        }
    */
    for (int i = 0; i < NUM_LINHAS; i++)
    {

        printf("%s\n", mapa[i]); // imprime direto 5 vezes a string inteira
    }

    fclose(f);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <ctype.h>

// 4.  Faça um algoritmo para ler uma string e retorne o número de palavras da mesma.

int main()
{

#define TAM_FRASE 100

    char frase[TAM_FRASE];
    char letra;
    int posicao = -1;
    int i;

    printf("Digite sua frase:\n");

    fgets(frase, TAM_FRASE, stdin);
    fflush(stdin);

    printf("Digite sua letra:\n");
    scanf("%c", &letra);
    fflush(stdin);

    for (i = 0; i < strlen(frase); i++)
    {

        if (frase[i] == letra)
        {
            posicao = i;
            break;
        }
    }

    if (posicao == -1)
        printf("Letra nao encontrada");

    else
        printf("Letra encontrada na posicao %d", i);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <ctype.h>

// 4.  Faça um algoritmo para ler uma string e retorne o número de palavras da mesma.

int main()
{

#define TAM_FRASE 100

    char frase[TAM_FRASE];
    char frase_copiada[TAM_FRASE];

    int palavra = 0;

    printf("Digite sua frase\n");

    fgets(frase, TAM_FRASE, stdin);
    fflush(stdin);

    for (int i = 0; i < strlen(frase); i++)
    {

        if (frase[i] == ' ')
            palavra++;
    }

    strcpy(frase_copiada, frase);

    printf("Frase copiada: %s\n", frase_copiada);
    puts(frase_copiada);

    printf("Numero de palavras: %d\n", palavra + 1);

    return 0;
}
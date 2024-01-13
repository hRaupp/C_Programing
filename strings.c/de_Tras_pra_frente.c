#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 3. Escreva um algoritmo que receba uma frase e a retorne escrita de trás pra frente.

int main()
{

#define TAM_FRASE 20

    char frase[TAM_FRASE];
    char frase_inversa[TAM_FRASE];
    int tamanho = 0;

    printf("Digite sua frase\n");
    fgets(frase, TAM_FRASE, stdin);
    fflush(stdin);

    tamanho = strlen(frase);

    for (int i = tamanho - 1; i >= 0; i--)
    {
        frase_inversa[i] = frase[tamanho - i - 1];
    }

    frase_inversa[tamanho] = '\0';

    printf("%s", frase);

    printf("\n");

    printf("%s", frase_inversa);

    return 0;
}
/// 2. Implemente um algoritmo que receba um frase, calcule e mostre a quantidade de vogais da frase digitada. O algoritmo deverá contar vogais maiúsculas e minúsculas.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

#define TAM_FRASE 20

    char frase[TAM_FRASE];
    char letra;
    int vogal = 0;

    printf("Digite sua frase\n");
    gets(frase);
    fflush(stdin);

    for (int i = 0; i < TAM_FRASE; i++)
    {
        letra = toupper(frase[i]);
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
            vogal++;
    }

    printf("Numero de vogais: %d", vogal);
    return 0;
}
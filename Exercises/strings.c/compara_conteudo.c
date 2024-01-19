/// 6.  Faça um algoritmo que leia 2 strings. Mostre o conteúdo das mesmas e seus comprimentos. Informe também se as duas strings possuem o mesmo comprimento.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

#define TAM_FRASE 100

    char frase1[TAM_FRASE];
    char frase2[TAM_FRASE];

    int conta1 = 0;
    int conta2 = 0;

    printf("Digite a primeira frase\n");
    fgets(frase1, TAM_FRASE, stdin);
    fflush(stdin);

    printf("Digite a segunda frase\n");
    fgets(frase2, TAM_FRASE, stdin);
    fflush(stdin);

    for (int i = 0; i < strlen(frase1); i++)
    {

        if (frase1[i] == '\0')
            break;

        else
            conta1++;
    }

    puts(frase1);
    printf("Tamanho primeira frase: %d\n", conta1);

    for (int i = 0; i < strlen(frase2); i++)
    {

        if (frase2[i] == '\0')
            break;

        else
            conta2++;
    }

    puts(frase2);
    printf("Tamanho segunda frase: %d\n", conta2);

    if (conta1 == conta2)
        printf("Possuem o mesmo tamanho\n");

    else

        printf("Nao possuem o mesmo tamanho\n");

    return 0;
}
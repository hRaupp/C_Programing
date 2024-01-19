#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

#define TAM_FRASE 100

    char frase[TAM_FRASE];

    int letras_dif = 0;

    int i = 0;
    int j = 0;

    printf("Digite sua frase:\n");
    fgets(frase, TAM_FRASE, stdin);
    fflush(stdin);

    for (i = 0; i < strlen(frase); i++) /// percorre a frase
    {
        int nova_letra = 1;

        for (j = 0; j < i; j++)
        { // percorre toda a frase a quantidade de letras que tem a frase

            if (frase[j] == frase[i]) /// compara as letras
                nova_letra = 0;
        }

        if (nova_letra)
            letras_dif++;
    }

    printf("Numero de letras diferentes: %d", letras_dif);
    return 0;
}
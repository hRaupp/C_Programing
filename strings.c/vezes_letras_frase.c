#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 9.  Escreva uma função que receba uma cadeia de caracteres e imprima uma tabela que dê o número de ocorrências de cada carácter na cadeia.

int main()
{

#define TAM_FRASE 100

    char frase[TAM_FRASE];

    int i;
    int cont = 0;

    printf("Digite sua frase\n");
    fgets(frase, TAM_FRASE, stdin);
    fflush(stdin);

    for (i = 0; i < strlen(frase); i++)
    {
        bool nova_letra = true;
        for (int j = 0; j < i; j++)
        {
            if (frase[j] == frase[i])
                nova_letra = false;
        }

        if (nova_letra)
        {
            cont = 0;

            for (int j = 0; j < strlen(frase); j++)
            {

                if (frase[j] == frase[i])
                    cont++;
            }
        }

        printf("letra %c apareceu %d\n", frase[i], cont);
    }
    return 0;
}
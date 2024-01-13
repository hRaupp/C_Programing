#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <ctype.h>

int main()
{

#define TAM_FRASE 100

    char frase[TAM_FRASE];
    int tamanho = 0;

    printf("Digite sua frase\n");

    fgets(frase, TAM_FRASE, stdin);
    fflush(stdin);
    /*
        for (int i = 0; i < strlen(frase); i++)
        {

            if (isupper(frase[i]))
                frase[i] = tolower(frase[i]);

            else
                frase[i] = toupper(frase[i]);

            printf("%c", frase[i]);
        }
    */

    for (int i = 0; i < TAM_FRASE; i++)
    {

        tamanho++;

        if (frase[i] == '\0')
            break;
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] >= 97 && frase[i] <= 122)
            frase[i] -= 32;
        else if (frase[i] != 8)
            frase[i] += 32;

        printf("%c", frase[i]);
    }

    return 0;
}
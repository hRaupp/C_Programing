/*
2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1 = 1;
    int num2 = 2;

    int *pnum1 = &num1;
    int *pnum2 = &num2;

    pnum1 > pnum2 ? printf("pnum1 >: %d, pnum2: %d", *pnum1, *pnum2) : printf("pnum2 >: %p", pnum2);
    // se nao usar o *, comparará os endereços. Se usar com, comparara os conteudos

    return;
}
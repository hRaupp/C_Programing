/*
Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.
*/

#include <stdio.h>
#include <stdlib.h>

void alternaValor(int *a, int *b);

void alternaValor(int *a, int *b)
{

    // a = 1 estaria mudando o valor do ponteiro
    //*a = 1 estaria mudando o conteudo da variavél que esta sendo passada como parametro

    int mem = *a;
    *a = *b;
    *b = mem;
};

int main()
{

    int a = 1;
    int b = 2;

    printf("Antes\na: %d\nb: %d\n", a, b);

    alternaValor(&a, &b); // alterou o coteudo das variaveis

    printf("Depois\na: %d\nb: %d", a, b);

    return 0;
}
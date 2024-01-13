#include <stdio.h>
#include <stdlib.h>

int main()
{

#define TAM1_LIN 2
#define TAM1_COL 3

#define TAM2_LIN 3
#define TAM2_COL 2

    /// Para multiplicar 2 matrizes, multiplicamos [0][0] por [0][0], [0][1] por [1][0] e [0][2] por [2][0] e somamos
    /// o resultado estara em [0][0] da resposta
    ///  depois multiplica [1][0] por [0][0], depois [1][1] por [1][0] e soma tudo

    /// para poder multiplicar, o numero de colunas de A tem que ser igual ao numero de linhas de B

    int mat1[TAM1_LIN][TAM1_COL] = {{1, 2, 3},
                                    {4, 5, 6}};

    int mat2[TAM2_LIN][TAM2_COL] = {{9, 8},
                                    {6, 5},
                                    {7, 8}};
    int matr[TAM1_LIN][TAM2_COL];

    /// Inicializa a matriz de resultado com zeros
    for (int i = 0; i < TAM1_LIN; i++)
    {
        for (int j = 0; j < TAM2_COL; j++)
        {
            matr[i][j] = 0;
        }
    }

    /// fazendo a multiplicacao

    for (int linhas1 = 0; linhas1 < TAM1_LIN; linhas1++)
    { /// percorrendo as linhas da primeira matriz
        for (int colunas2 = 0; colunas2 < TAM2_COL; colunas2++)
        { /// colunas da segunda matriz, o que sera multiplicado
            for (int i = 0; i < TAM1_COL; i++)
            {                                                                    /// fazendo a soma para cada coluna da primeira matriz
                matr[linhas1][colunas2] += mat1[linhas1][i] * mat2[i][colunas2]; /// soma a multiplicacao de cada um
            }
        }
    }

    for (int colunas = 0; colunas < TAM2_COL; colunas++)
    {
        for (int linhas = 0; linhas < TAM1_LIN; linhas++)
        {
            printf("%d \t", matr[linhas][colunas]);
        }
        printf("\n");
    }

    return 0;
}

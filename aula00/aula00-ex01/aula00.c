#include <stdio.h>

/*
Construa um algoritmo que efetue e apresente o resultado da soma entre duas matrizes 3 x 5.
Inicialize a matriz com valores quaisquer e imprima o resultado na tela.

*/

int main(int argc, char const *argv[])
{
    int a[3][5] = {5, 4, 9, 7, 6, 7, 6, 2, 4, 8, 3, 1, 4, 9, 1};
    int b[3][5] = {9, 7, 3, 1, 8, 6, 2, 4, 5, 1, 8, 7, 3, 2, 1};
    int c[3][5];

    for (int i = 0; i < 3; i++) // linha
    {
        for (int j = 0; j < 5; j++) // coluna
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

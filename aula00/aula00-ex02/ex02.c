#include <stdio.h>

/*
Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um escalar k
e imprima o resultado na tela. O usuário deve fornecer os valores da matriz e
 de k.
*/

int main(int argc, char const *argv[])
{
    int k = 0;
    int a[3][3];

    // Coletando do usuário os valores para popular a matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Entre com o valor na coordenada [%d,%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Coletando do usuário o escalar k
    printf("Entre com o valor do escalar k: ");
    scanf("%d", &k);

    // Multiplicando cada valor pelo escalar k
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = k * a[i][j];
        }
    }

    // Exibindo o resultado
    for (int i = 0; i < 3; i++)
    {
        printf("|");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("|\n");
    }

    return 0;
}

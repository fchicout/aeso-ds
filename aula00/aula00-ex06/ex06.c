#include <stdio.h>

/*
Faça um programa para multiplicar duas matrizes com tamanho até 10x10,
armazenando o resultado em uma terceira matriz.
 - O programa deve solicitar ao usuário as duas dimensões das duas matrizes;
 - O programa deve verificar se as matrizes podem ser multiplicadas e
   apresentar uma mensagem de erro, caso não seja possível.
*/

int main(int argc, char const *argv[])
{
    int matA[10][10];
    int matB[10][10];
    int matResult[10][10];

    int matAxSize = 0, matAySize = 0, matBxSize = 0, matBySize = 0;

    // Ask user to tell me what are the dimensions of the matrix to multiply
    printf("Qual a dimensão em x da matriz A (less than 10))?\n");
    scanf("%d", matAxSize);
    printf("\nQual a dimensão em y da matriz A (less than 10)?\n");
    scanf("%d", matAySize);

    printf("Qual a dimensão em x da matriz B (less than 10))?\n");
    scanf("%d", matBxSize);
    printf("\nQual a dimensão em y da matriz B (less than 10)?\n");
    scanf("%d", matBySize);

    // Number of columns from A must be equal to the number of rows of B
    if (matAySize == matBxSize)
    {
        int j = 0; // Second for loop counter initial value

        for (int i = 0; i < 10; i++)
        {
            matResult[i][j] = 0; // Inicializando acumulador
            for (; j < 10; j++)
            {
                matResult[i][j] += matA[i][j] * matB[i][j];
            }
        }
    } else {
        printf("Number of columns from A must be equal to the number of rows of B. Cant multiply");
    }


    return 0;
}

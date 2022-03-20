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

    int xAxisSize=0, yAxisSize=0;

    // Ask user to tell me what are the dimensions of the matrix to multiply
    printf("Qual a dimensão em x da matriz?\n");
    scanf("%d", xAxisSize);
    printf("\nQual a dimensão em y da matriz?\n");
    scanf("%d", yAxisSize);

    

    int j = 0; //Second for loop counter initial value

    for (int i = 0; i < xAxisSize; i++)
    {
        matResult[i][j] = 0; // Inicializando acumulador
        for (; j < yAxisSize; j++)
        {
            matResult[i][j] += matA[i][j] * matB[i][j];
        }
    }
    
    
    return 0;
}

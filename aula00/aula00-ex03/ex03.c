#include <stdio.h>

/*
Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer
 uma busca desse valor na matriz e, ao final escrever a localização (linha 
 e coluna) ou uma mensagem de “não encontrado”.
*/

int main(int argc, char const *argv[])
{
    int num2Search = 0;
    int a[20][20];

    // Coletando do usuário os valores para popular a matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Entre com o valor na coordenada [%d,%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Coletando do usuário o valor a procurar (num2Search)
    printf("Entre com o valor do escalar k: ");
    scanf("%d", &num2Search);

    // Buscando o valor de num2Search na matriz a
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == num2Search)
            {
                printf("Número Pesquisado: %d | Encontrado na [%d,%d];\n", num2Search, i, j);
            }
        }
    }

    return 0;
}

#include <stdio.h>

/*
Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final escrever a localização (linha
e coluna) ou uma mensagem de “não encontrado”.
*/

int main(int argc, char const *argv[])
{
    int mat[20][20];
    int valorParaEncontrar = 0;

    // População de dados da matriz
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("Entre com o valor da coordenada [%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    

    // Lookup na matriz
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (mat[i][j] == valorParaEncontrar)
            {
                printf("Valor %d encontrado na coordenada [%d][%d] da matriz", valorParaEncontrar, i, j);
            }
        }
    }

    return 0;
}

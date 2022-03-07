#include <stdio.h>

/*
Escreva um programa que leia números inteiros no intervalo [0,50]
e os armazene em um vetor com 10 posições.  Preencha um segundo vetor
 apenas com os números ímpares do primeiro vetor.
 Imprima os dois vetores, 2 elementos por linha.
*/

int main(int argc, char const *argv[])
{
    int vetorOriginal[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        vetorImpares[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    // Entrada dos dados
    printf("Entre com os dados do vetor ORIGINAL!!!\n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("Posicao %d: ", i);
            scanf("%d", &vetorOriginal[i]);
        } while (!((vetorOriginal[i] >= 0) && (vetorOriginal[i] <= 50)));
    }

    // Separação dos Dados
    for (int i = 0; i < 10; i++)
    {
        if (vetorOriginal[i] % 2 == 1)
        {
            vetorImpares[i] = vetorOriginal[i];
        }
    }

    // Impressão tela
    for (int i = 0; i < 10; i++)
    {
        if (vetorImpares[i] % 2 == 1)
        {
            printf("%d\t\t%d\n", vetorOriginal[i], vetorImpares[i]);
        }
        else
        {
            printf("%d\t\tValor nao impar\n", vetorOriginal[i]);
        }
    }
    return 0;
}

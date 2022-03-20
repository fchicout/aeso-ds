#include <stdio.h>

/*
Dada uma matriz 5x5, elabore um algoritmo que imprima:
- A diagonal principal
- A diagonal secundária
- A soma da linha 4
- A soma da coluna 2
- Tudo, exceto a diagonal principal
*/

int main(int argc, char const *argv[])
{
    int mat[5][5] = {{1,2,3,4,5}, 
                     {1,2,3,4,5},
                     {1,2,3,4,5},
                     {1,2,3,4,5},
                     {1,2,3,4,5}};
    int sum=0;
    printf("printing main diagonal\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                printf("%d ", mat[i][j]);
            }
        }
    }
    
    printf("\nprinting secondary diagonal\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == (5-i))
            {
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\nprinting sum of line 4\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 3) // the fourth line.... 
            {
                sum += mat[i][j];
                printf("The sum of the fourth line is: %d\n", sum);
            }
        }
    }
    
    printf("\nprinting main diagonal\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                printf("%d ", mat[i][j]);
            } else {
                printf(" - ");
            }
        }
    }
    return 0;
}
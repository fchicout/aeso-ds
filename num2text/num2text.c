#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[2];
    char unidades[10][6] = {"zero", "um", "dois", "três", "quatro",
                            "cinco", "seis", "sete", "oito", "nove"};
    char excecoes[10][9] = {"-", "onze", "doze", "treze", "quatorze",
                            "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    char dezenas[10][9] = {"-", "dez", "vinte", "trinta", "quarenta",
                           "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    printf("Entre com numero entre 0 e 99 (separe os algarismos por espaco):");
    scanf("%d %d", num[0], num[1]);

    if (num[0] == 0) // if is a less than 10 number
    {
        printf(unidades[num[1]]);
    }
    else if (num[0] == 1) // exceptions
    {
        if (num[1] == 0)
        {
            printf("%s", dezenas[num[0]]); // dez
        }
        else
        {
            printf(excecoes[num[1]]);
        }
    }
    else if (num[0] >= 2)
    {
        if (num[1] == 0)
        {
            printf("%s", dezenas[num[0]]);
        }
        else
        {
            printf("%s e %s", dezenas[num[0]], unidades[num[1]]);
        }
    }
    return 0;
}

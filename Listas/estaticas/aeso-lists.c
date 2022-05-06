#include "aeso-lists.h"

// Indicador de slot vazio!!
int emptyIndicator = -1;

void startList(int list[])
{
    for (int i = 0; i < LIST_SIZE; i++)
    {
        list[i] = emptyIndicator;
    }
}

// Imprimir Lista
void printList(int list[])
{
    printf("Index\t\t=>\tValue\n");
    for (int i = 0; i < LIST_SIZE; i++)
    {
        printf("%d\t\t=>\t%d\n", i, list[i]);
    }
}

void insertDataToList(int list[], int data)
{
    // Pesquisar um slot do vetor livre.
    for (int i = 0; i < LIST_SIZE; i++)
    {
        // Teste pra identificar se o slot do vetor está livre
        if (list[i] == emptyIndicator)
        {
            // Atribuição / Inserção de valor na lista
            list[i] = data;
            break;
        }
    }
}

int searchData(int list[], int data)
{
    for (int i = 0; i < LIST_SIZE; i++)
    {
        if (list[i] == data)
        {
            return i;
        }
    }
    return -1;
}

void removeDataByIndex(int list[], int index)
{
    for (int i = index; i < (LIST_SIZE - 1); i++)
    {
        // Trazendo o valor do slot seguinte pro slot atual do for
        list[i] = list[i + 1];
    }
    list[9] = emptyIndicator;
}

void removeDataByValue(int list[], int data)
{
    // Pesquisa índice onde o dado se encontra (1a ocorrencia)
    int indexToRemove = searchData(list, data);
    removeDataByIndex(list, indexToRemove);
}

int endOfList(int list[])
{
    int firstEmptySlot = searchData(list, emptyIndicator);
    return (firstEmptySlot - 1);
}
#include <stdio.h>

#define LIST_SIZE 10

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

int main(int argc, char const *argv[])
{
    // Container de dados é só de INTEIROS
    int myList[LIST_SIZE];
    startList(myList);
    printf("List before insertions\n");
    // printList(myList);
    // printf("List after insert data 4\n");
    insertDataToList(myList, 4);
    // printList(myList);
    // printf("List after insert data 12\n");
    insertDataToList(myList, 12);
    insertDataToList(myList, 7);
    printList(myList);
    printf("==============================\n");
    printf("Looking for 12 into list\n");
    printf("It is on index: %d\n", searchData(myList, 12));
    printf("==============================\n");
    printf("Looking for 13 into list\n");
    printf("It is on index: %d\n", searchData(myList, 13));
    printf("==============================\n");
    removeDataByValue(myList, 4);
    printList(myList);

    printf("The last value is on slot %d\n", endOfList(myList));
    return 0;
}

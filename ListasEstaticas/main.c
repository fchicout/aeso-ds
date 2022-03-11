#include<stdio.h>

#define LIST_SIZE 10

// Fim de Fila

// Container de dados é só de INTEIROS
int myList[LIST_SIZE];
int emptyIndicator = -1;

void startList(){
    for (int i = 0; i < LIST_SIZE; i++)
    {
        myList[i] = emptyIndicator;
    }    
}

// Imprimir Lista
void printList(int list[]){
    printf("Index\t\t=>\tValue\n");
    for (int i = 0; i < LIST_SIZE; i++)
    {
        printf("%d\t\t=>\t%d\n", i, list[i]);
    }
    
}

void insertDataToList(int data){
    // Pesquisar um slot do vetor livre.
    for (int i = 0; i < LIST_SIZE; i++)
    {
        // Teste pra identificar se o slot do vetor está livre
        if(myList[i] == emptyIndicator){
            // Atribuição / Inserção de valor na lista
            myList[i] = data;
            break;
        }
    }
}

int searchData(int data){
    for (int i = 0; i < LIST_SIZE; i++)
    {
        if(myList[i] == data){
            return i;
        }
    }
    return -1;    
}

void removeDataByIndex(int index){
    for (int i = index; i < (LIST_SIZE-1); i++)
    {
        // Trazendo o valor do slot seguinte pro slot atual do for
        myList[i] = myList[i+1];
    }
    myList[9] = emptyIndicator;
}


void removeDataByValue(int data){
    // Pesquisa índice onde o dado se encontra (1a ocorrencia)
    int indexToRemove = searchData(data);
    removeDataByIndex(indexToRemove);
}

int endOfList(int list[]){
    int firstEmptySlot = searchData(emptyIndicator);
    return (firstEmptySlot-1);
}


int main(int argc, char const *argv[])
{
    startList();
    printf("List before insertions\n");
    // printList(myList);
    // printf("List after insert data 4\n");
    insertDataToList(4);
    // printList(myList);
    // printf("List after insert data 12\n");
    insertDataToList(12);
    insertDataToList(7);
    printList(myList);
    printf("==============================\n");
    printf("Looking for 12 into list\n");
    printf("It is on index: %d\n", searchData(12));
    printf("==============================\n");
    printf("Looking for 13 into list\n");
    printf("It is on index: %d\n", searchData(13));
    printf("==============================\n");
    removeDataByValue(4);
    printList(myList);

    printf("The last value is on slot %d\n", endOfList(myList));
    return 0;
}

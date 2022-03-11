#include<stdio.h>

// Remover, Buscar, Fim de Fila

// Container de dados é só de INTEIROS
int myList[10];

void startList(){
    for (int i = 0; i < 10; i++)
    {
        myList[i] = 0;
    }    
}

// Imprimir Lista
void printList(int list[]){
    printf("Index\t\t=>\tValue\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t\t=>\t%d\n", i, list[i]);
    }
    
}

void insertDataToList(int data){
    // Pesquisar um slot do vetor livre.
    for (int i = 0; i < 10; i++)
    {
        // Teste pra identificar se o slot do vetor está livre
        if(myList[i] == 0){
            // Atribuição / Inserção de valor na lista
            myList[i] = data;
            break;
        }
    }
}

int searchData(int data){
    for (int i = 0; i < 10; i++)
    {
        if(myList[i] == data){
            return i;
        }
    }
    return -1;    
}

void removeDataByIndex(int index){
    for (int i = index; i < (10-1); i++)
    {
        // Trazendo o valor do slot seguinte pro slot atual do for
        myList[i] = myList[i+1];
    }
    myList[9] = 0;
}


void removeDataByValue(int data){
    // Pesquisa índice onde o dado se encontra (1a ocorrencia)
    int indexToRemove = searchData(data);
    removeDataByIndex(indexToRemove);
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

    return 0;
}

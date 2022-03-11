#include<stdio.h>

// Inserir, Remover, Buscar, Fim de Fila

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

int main(int argc, char const *argv[])
{
    startList();
    printf("List before insertions\n");
    printList(myList);
    printf("List after insert data 4\n");
    insertDataToList(4);
    printList(myList);
    printf("List after insert data 12\n");
    insertDataToList(12);
    printList(myList);
    return 0;
}

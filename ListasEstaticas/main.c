#include <stdio.h>

#include "aeso-lists.h"


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

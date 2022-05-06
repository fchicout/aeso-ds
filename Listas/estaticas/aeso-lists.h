#ifndef AESO_LISTS_H
#define AESO_LISTS_H

#include <stdio.h>

#define LIST_SIZE 10

void startList(int list[]);
// Print List
void printList(int list[]);
// Insert data on list
void insertDataToList(int list[], int data);
// Search for first occurrence of data on list
int searchData(int list[], int data);
// Remove data from list, by index
void removeDataByIndex(int list[], int index);
// Remove data from list, by value
void removeDataByValue(int list[], int data);
// Detects end of a list, returning its final value index
int endOfList(int list[]);


#endif
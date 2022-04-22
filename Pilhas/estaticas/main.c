#include <stdio.h>
/* 
 * Criar uma pilha
 * Empilhar (push)
 * Desempilhar (pop)
 * Tamanho (size) (Done!)
 * estaVazia (isEmpty) (Done!)
 * Liberar Pilha da memória (freeStack)
 */

struct stackItem
{
    int value;
};
typedef struct stackItem StackItem;

struct stack
{
    StackItem items[10];
    int stackSize;
};
typedef struct stack Stack;

int stackSize(Stack s){
    return s.stackSize;
}

int isStackEmpty(Stack s){
    return (s.stackSize == 0);
}




int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

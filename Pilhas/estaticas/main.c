#include <stdio.h>
/* 
 * Criar uma pilha
 * Empilhar (push)
 * Desempilhar (pop)
 * Tamanho (size)
 * estaVazia (isEmpty)
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






int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

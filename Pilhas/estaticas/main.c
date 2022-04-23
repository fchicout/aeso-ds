#include <stdio.h>
/*
 * Criar uma pilha (Done!)
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

int stackSize(Stack s)
{
    return s.stackSize;
}

int isStackEmpty(Stack s)
{
    return (s.stackSize == 0);
}

Stack push(Stack s, int data)
{
    int index = 10 - s.stackSize - 1;
    s.items[index].value = data;
    s.stackSize = s.stackSize + 1;
    return s;
}

int pop(Stack* s)
{
    int topIndex = 10 - s->stackSize;
    s->stackSize = s->stackSize - 1;
    return s->items[topIndex].value;
}

Stack createStack()
{
    Stack s;
    s.stackSize = 0;
    return s;
}

void printStack(Stack s)
{
    for (int i = 0; i < (10-s.stackSize); i++)
    {
        printf("%d\t\tNULL\n", i);
    }
    
    for (int i = (10-s.stackSize); i < 10; i++)
    {
        printf("%d\t\t%d\n", i, s.items[i].value);
    }
}

int main(int argc, char const *argv[])
{
    Stack stack = createStack();
    stack = push(stack, 4);
    stack = push(stack, 5);
    stack = push(stack, 12);
    stack = push(stack, 8);
    stack = push(stack, 78);
    printStack(stack);
    printf("=================\n");
    printf("Element popped out: %d\n", pop(&stack));
    printf("Stack Size: %d\n", stackSize(stack));
    printf("=================\n");
    printStack(stack);
    printf("=================\n");
    return 0;
}

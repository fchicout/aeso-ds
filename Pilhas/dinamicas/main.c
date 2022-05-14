#include <stdio.h>
#include <stdlib.h>

struct task
{
    char *titulo;
    char *responsavel;
    struct task *upNext;
};
typedef struct task Task;

typedef struct
{
    Task *bottom, *top;
    int stackSize;
} Stack;

Stack *createStack()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->bottom = stack->top;
    stack->stackSize = 0;
    return stack;
}

void push(Stack *stack, Task *task)
{
    stack->top->upNext = task;
    stack->top = task;
    stack->stackSize = stack->stackSize + 1;
    if (stack->stackSize == 0)
    {
        stack->bottom = task;
    }
}

void pop(Stack *stack){
    
}


int main(int argc, char const *argv[])
{
    // Stack* stack = createStack();
    // printf("Stack size: %d\n", stack->stackSize);
    return 0;
}

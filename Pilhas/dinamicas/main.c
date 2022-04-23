#include <stdio.h>
#include <stdlib.h>

struct task
{
    char* titulo;
    char* responsavel;
    struct task *upNext;
};
typedef struct task Task;

typedef struct 
{
    Task* bottom, top;
    int stackSize;
} Stack;

Stack* createStack(){
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->stackSize = 0;
    return stack;
}

int main(int argc, char const *argv[])
{
    // Stack* stack = createStack();
    // printf("Stack size: %d\n", stack->stackSize);
    return 0;
}

#include <stdio.h>

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



int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

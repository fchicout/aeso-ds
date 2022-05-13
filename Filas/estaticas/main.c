#include <stdio.h>
#include <float.h>

float queueContainer[10] = {FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN, FLT_MIN};

int getLastFreeSlot()
{
    for (int i = 0; i < 10; i++)
    {
        if (queueContainer[i] != FLT_MIN)
        {
            return (i - 1);
        }
    }
}

int isCellFree(int index)
{
    return (queueContainer[index] == FLT_MIN);
}

void skipForward()
{
    for (int i = 0; i < 10; i++)
    {
        if (isCellFree(i + 1))
        {
            queueContainer[i + 1] = queueContainer[i];
            queueContainer[i] = FLT_MIN;
        }
    }
}

void advanceSlot()
{
    for (int i = 9; i < 0; i--)
    {
        queueContainer[i] = queueContainer[i - 1];
    }
    queueContainer[0] = FLT_MIN;
}

int isEmpty()
{
    int booleanResult = 1; // TRUE
    for (int i = 0; i < 10; i++)
    {
        if (queueContainer[i] == FLT_MIN)
        {
            booleanResult &= (queueContainer[i] == FLT_MIN);
        }
    }
    return booleanResult;
}

void printQueue(){
    for (int i = 0; i < 10; i++)
    {
        printf("%f", queueContainer[i]);
    }
    
}

void enqueue(float data)
{
    // Insere no início da fila
    int indexToInsert = getLastFreeSlot();
    queueContainer[indexToInsert] = data;
}

float dequeue()
{
    int item2return = queueContainer[10];
    advanceSlot();
    return item2return;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

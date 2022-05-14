#include <stdio.h>

struct queue
{

    int capacity;
    float *dados;
    int first;
    int last;
    int qntItems;
};

typedef struct queue Queue;

void createQueue(Queue *f, int c)
{

    f->capacity = c;
    f->dados = (float *)malloc(f->capacity * sizeof(float));
    f->first = 0;
    f->last = -1;
    f->qntItems = 0;
}

void insert(Queue *f, int v)
{

    if (f->last == f->capacity - 1)
        f->last = -1;

    f->last++;
    f->dados[f->last] = v; // incrementa ultimo e insere
    f->qntItems++;             // mais um item inserido
}

int remove(Queue *f)
{ // pega o item do comeÃ§o da fila

    int temp = f->dados[f->first++]; // pega o valor e incrementa o primeiro

    if (f->first == f->capacity)
        f->first = 0;

    f->qntItems--; // um item retirado
    return temp;
}

int isEmpty(Queue *f)
{ // retorna verdadeiro se a fila estÃ¡ vazia

    return (f->qntItems == 0);
}

int isFull(Queue *f)
{ // retorna verdadeiro se a fila estÃ¡ cheia

    return (f->qntItems == f->capacity);
}

void printQueue(Queue *f)
{

    int cont, i;

    for (cont = 0, i = f->first; cont < f->qntItems; cont++)
    {

        printf("%.2f\t", f->dados[i++]);

        if (i == f->capacity)
            i = 0;
    }
    printf("\n\n");
}

void main()
{

    int opcao, capa;
    float valor;
    Queue umaFila;

    // cria a fila
    printf("\nCapacidade da fila? ");
    scanf("%d", &capa);
    createQueue(&umaFila, capa);

    // apresenta menu
    while (1)
    {

        printf("\n1 - Inserir elemento\n2 - Remover elemento\n3 - Mostrar Fila\n0 - Sair\n\nOpcao? ");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 0:
            exit(0);

        case 1: // insere elemento
            if (isFull(&umaFila))
            {

                printf("\nFila Cheia!!!\n\n");
            }
            else
            {

                printf("\nValor do elemento a ser inserido? ");
                scanf("%f", &valor);
                insert(&umaFila, valor);
            }

            break;

        case 2: // remove elemento
            if (isEmpty(&umaFila))
            {

                printf("\nFila vazia!!!\n\n");
            }
            else
            {

                valor = remove(&umaFila);
                printf("\n%1f removido com sucesso\n\n", valor);
            }
            break;

        case 3: // mostrar fila
            if (isEmpty(&umaFila))
            {

                printf("\nFila vazia!!!\n\n");
            }
            else
            {

                printf("\nConteudo da fila => ");
                printQueue(&umaFila);
            }
            break;

        default:
            printf("\nOpcao Invalida\n\n");
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

Lista *criaLista()
{
    return NULL;
}

Lista *insereNoLista(Lista *cursor, int valor)
{
    Lista *novoNo = (Lista *)malloc(sizeof(Lista));
    novoNo->info = valor;
    novoNo->prox = cursor;
    cursor = novoNo;
    return cursor;
}

void imprimir(Lista *inicio)
{
    Lista *p;
    if (inicio == NULL)
    {
        printf("Lista Vazia");
        return;
    }
    for (p = inicio; p != NULL; p = p->prox)
    {
        printf("%d \n", p->info);
    }
}

Lista *removeNoLista(Lista *ref, int valor)
{
    Lista *ant = NULL;
    Lista *p = ref;
    while (p != NULL && p->info != valor)
    {
        ant = p;
        p = p->prox;
    }
    if (p == NULL) // elemento não encontrado
        return ref;
    // remove primeiro elemento
    if (p == ref)
        ref = p->prox;
    else // remove do meio ou fim da lista
        ant->prox = p->prox;
    free(p);
    return ref;
}

void libera(Lista **lista)
{
    Lista *l = *lista;

    while (l != NULL)
    {
        Lista *aux = l->prox;
        free(l);
        l = aux;
    }
    *lista = NULL;
}

int main(int argc, char const *argv[])
{
    Lista *noinicial = criaLista();
    noinicial = insereNoLista(noinicial, 5);
    noinicial = insereNoLista(noinicial, 9);
    noinicial = insereNoLista(noinicial, 36);
    imprimir(noinicial);
    removeNoLista(noinicial, 9);
    imprimir(noinicial);
    return 0;
}

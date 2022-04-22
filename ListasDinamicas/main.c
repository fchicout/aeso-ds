#include <stdio.h>

struct lista
{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* criaLista(){
    return NULL;
}

Lista* insereNoLista(Lista* cursor, int valor){
    Lista* novoNo = (Lista*) malloc(sizeof(Lista));
    novoNo->info = valor;
    novoNo->prox = cursor;
    cursor = novoNo;
    return cursor;
}

void imprimir(Lista* inicio){
    Lista *p;
    if (inicio == NULL)
    {
        printf("Lista Vazia");
        return;
    }
    for (p = inicio; p != NULL; p = p->prox)
    {
        printf("%d ", p->info);
    }
}

int main(int argc, char const *argv[])
{
    Lista *noinicial = criaLista();
    noinicial = insereNoLista(noinicial, 5);
    noinicial = insereNoLista(noinicial, 9);
    noinicial = insereNoLista(noinicial, 36);
    
    return 0;
}

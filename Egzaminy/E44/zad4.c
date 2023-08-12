#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

struct node *add(struct node *lista, int x)
{
    struct node *wsk = malloc(sizeof(struct node));
    wsk->a = x;
    wsk->next = lista;

    return wsk;
}

void printList(struct node *lista)
{
    struct node *wsk = lista;
    while (wsk != NULL)
    {
        printf("%d ", wsk->a);
        wsk = wsk->next;
    }
    printf("\n");
}

struct node *create()
{
    return NULL;
}

void zeruj(struct node *lista)
{
    struct node *wsk = lista;
    while (wsk != NULL)
    {
        if (wsk->a % 3 == 0)
        {
            wsk->a = 0;
        }
        wsk = wsk->next;
    }
}

int main()
{
    struct node *lista = create();
    lista = add(lista, 9);
    lista = add(lista, 1);
    lista = add(lista, 3);
    lista = add(lista, 2);
    printList(lista);

    zeruj(lista);
    printList(lista);

    return 0;
}

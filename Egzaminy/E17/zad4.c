#include <stdio.h>
#include <stdlib.h>

struct elem {
    int t;
    struct elem * next;
};

void add(struct elem **lista, int x)
{
    struct elem *wsk = *lista;
    if (wsk == NULL)
    {
        wsk = malloc(sizeof(struct elem));
        wsk->t = x;
        wsk->next = NULL;
        *lista = wsk;
    }
    else
    {
        while (wsk->next != NULL)
        {
            wsk = wsk->next;
        }

        wsk->next = malloc(sizeof(struct elem));
        wsk->next->t = x;
        wsk->next->next = NULL;
    }
}

void printList(struct elem *lista)
{
    struct elem *wsk = lista;
    while (wsk != NULL)
    {
        printf("%d ", wsk->t);
        wsk = wsk->next;
    }
    printf("\n");
}

struct elem *create()
{
    return NULL;
}

void doubleElement(struct elem *lista)
{
    if (lista != NULL)
    {
        struct elem *wsk = lista;
        while (wsk != NULL)
        {
            struct elem *temp = wsk->next;
            wsk->next = malloc(sizeof(struct elem));
            wsk->next->t = wsk->t;
            wsk->next->next = temp;
            wsk = wsk->next->next;
        }
    }
}

int main()
{
    struct elem *lista = create();
    add(&lista, 2);
    add(&lista, 1);
    add(&lista, 3);
    add(&lista, 7);
    printList(lista);

    doubleElement(lista);
    printList(lista);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct elem {
    int t;
    struct elem * next;
};

void swapFirstAndLast(struct elem *lista)
{
    if (lista->next != NULL || lista->next->next != NULL)
    {
        struct elem *wsk1 = lista;
        struct elem *wsk2 = lista->next;
        while (wsk2->next != NULL)
        {
            wsk1 = wsk2;
            wsk2 = wsk2->next;
        }
        struct elem *temp = lista->next;
        lista->next = wsk2;
        wsk2->next = temp->next;
        wsk1->next = temp;
        temp->next = NULL;
    }

}

void add(struct elem *lista, int x)
{
    struct elem *wsk = malloc(sizeof(struct elem));
    wsk->t = x;
    wsk->next = lista->next;
    lista->next = wsk;
}

void printList(struct elem *lista)
{
    struct elem *wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%d ", wsk->t);
        wsk = wsk->next;
    }
    printf("\n");
}

int main()
{
    struct elem *lista = malloc(sizeof(struct elem));
    lista->next = NULL;
    add(lista, 7);
    add(lista, 3);
    add(lista, 1);
    add(lista, 2);
    printList(lista);

    swapFirstAndLast(lista);
    printList(lista);

    return 0;
}

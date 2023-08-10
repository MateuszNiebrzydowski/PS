#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

void add(struct node **lista, int x)
{
    struct node *wsk = malloc(sizeof(struct node));
    wsk->a = x;
    wsk->next = *lista;
    *lista = wsk;
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

void changeValue(struct node *lista)
{
    struct node *last = lista;
    struct node *current = lista;
    while (last->next != NULL)
    {
        last = last->next;
    }
    while (current->next != NULL)
    {
        if (current->a > 0)
        {
            current->a = last->a;
        }
        current = current->next;
    }
}

int main()
{
    struct node *lista = malloc(sizeof(struct node));
    lista = NULL;
    add(&lista, 7);
    add(&lista, -3);
    add(&lista, 1);
    add(&lista, -2);
    add(&lista, 5);
    printList(lista);
    changeValue(lista);
    printList(lista);

    return 0;
}

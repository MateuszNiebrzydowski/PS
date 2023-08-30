#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *create()
{
    return NULL;
}

void add(struct element **lista, int a)
{
    struct element *wsk = malloc(sizeof(struct element));
    wsk->x = a;
    wsk->next = *lista;
    *lista = wsk;
}

void printList(struct element *lista)
{
    struct element *wsk = lista;
    while (wsk != NULL)
    {
        printf("%d ", wsk->x);
        wsk = wsk->next;
    }
    printf("\n");
}

int sumOfSquares(struct element *lista1, struct element *lista2)
{
    struct element *wsk = lista1;
    int sum1 = 0;
    while (wsk != NULL)
    {
        sum1 += (wsk->x) * (wsk->x);
        wsk = wsk->next;
    }

    wsk = lista2;
    int sum2 = 0;
    while (wsk != NULL)
    {
        sum2 += (wsk->x) * (wsk->x);
        wsk = wsk->next;
    }

    if (sum1 == sum2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct element *l1 = create();
    add(&l1, 5);
    add(&l1, 1);
    add(&l1, 1);
    add(&l1, 2);
    printList(l1);

    struct element *l2 = create();
    add(&l2, 7);
    add(&l2, 3);
    add(&l2, 1);
    add(&l2, 2);
    printList(l2);

    printf("%d\n", sumOfSquares(l1, l2));

    return 0;
}

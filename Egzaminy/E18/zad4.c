#include <stdio.h>
#include <stdlib.h>

struct elem {
    int a;
    struct elem * next;
};

void add(struct elem **lista, int x)
{
    struct elem *wsk = malloc(sizeof(struct elem));
    wsk->a = x;
    wsk->next = *lista;
    *lista = wsk;
}

void printList(struct elem *lista)
{
    struct elem *wsk = lista;
    while (wsk != NULL)
    {
        printf("%d ", wsk->a);
        wsk = wsk->next;
    }
    printf("\n");
}

struct elem *create()
{
    return NULL;
};

void smallestValue(struct elem *lista)
{
    struct elem *wsk = lista;
    int temp = 0;
    while (wsk != NULL)
    {
        if (wsk->a < 0)
        {
            if(temp == 0 || wsk->a < temp)
            {
                temp = wsk->a;
            }
        }
        wsk = wsk->next;
    }
    if (temp != 0)
    {
        printf("%d\n", temp);
    }
}

int main()
{
    struct elem *lista = create();
    add(&lista, 4);
    add(&lista, -2);
    add(&lista, -5);
    add(&lista, 3);
    add(&lista, -1);
    printList(lista);
    smallestValue(lista);

    return 0;
}

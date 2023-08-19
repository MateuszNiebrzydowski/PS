#include <stdio.h>
#include <stdlib.h>

struct element {
    float a;
    struct element * next;
};

void add(struct element *lista, float x)
{
    struct element *wsk = malloc(sizeof(struct element));
    wsk->a = x;
    wsk->next = lista->next;
    lista->next = wsk;
}

void printList(struct element *lista)
{
    struct element *wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%.2f ", wsk->a);
        wsk = wsk->next;
    }
    printf("\n");
}

struct element *create()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->next = NULL;

    return lista;
}

float suma(struct element *l1, struct element *l2)
{
    struct element *wsk = l1->next;
    float sum = 0;
    while(wsk != NULL)
    {
        sum += wsk->a;
        wsk = wsk->next;
    }

    wsk = l2->next;

    while(wsk != NULL)
    {
        sum += wsk->a;
        wsk = wsk->next;
    }

    return sum;
}

int main()
{
    struct element *lista1 = create();
    add(lista1, 1.2);
    add(lista1, 0.7);
    add(lista1, 21.37);

    struct element *lista2 = create();
    add(lista2, 4.2);
    add(lista2, 12.85);
    add(lista2, 6.9);

    printList(lista1);
    printList(lista2);

    printf("\nSuma: %.2f\n", suma(lista1, lista2));

    return 0;
}

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

struct node *create()
{
    return NULL;
}

void printAddress(struct node *lista)
{
    struct node *wsk = lista;
    int sum = 0;
    int i = 0;
    while (wsk != NULL)
    {
        sum += wsk->a;
        wsk = wsk->next;
        i++;
    }
    float avg = (float)sum / i;
    printf("Srednia: %.2f\n", avg);
    printf("\n");

    wsk = lista;
    while (wsk != NULL)
    {
        if (wsk->a > avg)
        {
            printf("Element: %d, Adres: %p\n", wsk->a, wsk);
        }
        wsk = wsk->next;
    }
}

int main()
{
    struct node *lista = create();
    add(&lista, 5);
    add(&lista, 1);
    add(&lista, 1);
    add(&lista, 3);
    printList(lista);
    printAddress(lista);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node {
    float value;
    struct node * next;
};

void add(struct node **lista, float x)
{
    struct node *wsk = malloc(sizeof(struct node));
    wsk->value = x;
    wsk->next = *lista;
    *lista = wsk;
}

void printList(struct node *lista)
{
    struct node *wsk = lista;
    while (wsk != NULL)
    {
        printf("%.2f ", wsk->value);
        wsk = wsk->next;
    }
    printf("\n");
}

struct node *create()
{
    return NULL;
}

struct node *moreThanAvg(struct node *lista)
{
    if (lista == NULL)
    {
        return NULL;
    }

    struct node *wsk = lista;
    float sum = 0;
    int i = 0;
    while (wsk != NULL)
    {
        sum += wsk->value;
        i++;
        wsk = wsk->next;
    }

    float avg = sum / i;
    printf("Sum: %.2f Avg: %.2f\n", sum, avg);
    wsk = lista;
    while (wsk != NULL)
    {
        if (wsk->value > avg)
        {
            return wsk;
        }
        wsk = wsk->next;
    }
    return NULL;
}

int main()
{
    struct node *lista = create();
    add(&lista, 1.23);
    add(&lista, 3.45);
    add(&lista, 4.56);
    add(&lista, 2.34);
    printList(lista);

    struct node *ptr = moreThanAvg(lista);
    if (ptr == NULL)
    {
        return 0;
    }
    printf("%.2f\n", ptr->value);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node {
    float value;
    struct node * next;
};

void add(struct node *lista, float x)
{
    struct node *wsk = malloc(sizeof(struct node));
    wsk->value = x;
    wsk->next = lista->next;
    lista->next = wsk;
}

void printList(struct node *lista)
{
    struct node *wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%.1f ", wsk->value);
        wsk = wsk->next;
    }
    printf("\n");
}

struct node *create()
{
    struct node *wsk = malloc(sizeof(struct node));
    wsk->next = NULL;

    return wsk;
}

struct node *smallestElement(struct node *lista)
{
    if (lista->next == NULL)
    {
        return NULL;
    }
    struct node *wsk = lista->next;
    struct node *min = wsk;
    while (wsk != NULL)
    {
        if (wsk->value < min->value)
        {
            min = wsk;
        }
        wsk = wsk->next;
    }
    return min;
}

int main()
{
    struct node *lista = create();
    add(lista, 2.1);
    add(lista, 1.2);
    add(lista, 4.3);
    add(lista, 5.4);
    printList(lista);

    struct node *ptr = smallestElement(lista);
    if (ptr == NULL)
    {
        return 0;
    }
    printf("%.1f\n", ptr->value);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void suma(int a, int tab[][a])
{
    for (int i = 0; i < a; i++)
    {
        printf("%d ", tab[2][i]);
    }
    printf("\n");
}

int main()
{
    int tab[3][4] = {{1, 0, 2, 9}, {3, 8, 4, 7}, {5, 6, 10, 29}};
    suma(4, tab);

    return 0;
}

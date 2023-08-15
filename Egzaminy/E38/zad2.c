#include <stdio.h>
#include <stdlib.h>

void przepisz(const int *st, int *zm)
{
    *zm = (*st) * (*st);
}

int main()
{
    const int a = 5;
    int b = 7;
    printf("Stala: %d, Zmienna: %d\n", a, b);
    przepisz(&a, &b);
    printf("Stala: %d, Zmienna: %d\n", a, b);

    return 0;
}

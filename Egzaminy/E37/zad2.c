#include <stdio.h>
#include <stdlib.h>

void przepisz(const int *st, int *zm)
{
    *zm = (*st) * (*st);
}

int main()
{
    const int a = 3;
    int b = 13;

    printf("%d %d\n", a, b);

    przepisz(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

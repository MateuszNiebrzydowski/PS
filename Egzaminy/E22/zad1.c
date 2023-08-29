#include <stdio.h>
#include <stdlib.h>

float foo(int *const a, int *const b)
{
    return (float)(*a + *b) / 2;
}

int main()
{
    int x = 4;
    int y = 7;
    printf("%.1f\n", foo(&x, &y));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int fun1(int a)
{
    return a;
}

void foo(int x, int (*fun)(int))
{
    printf("%d + %d = %d\n", x, *fun, x+(*fun));
}

int main()
{
    foo(10, fun1(7));

    return 0;
}

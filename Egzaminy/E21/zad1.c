#include <stdio.h>
#include <stdlib.h>

int *foo(char *a, char *b, int x)
{
    int *ptr = &x;

    return ptr;
}

int main()
{
    char a[] = "abc";
    char d[] = "def";
    printf("%d\n", foo(a, d, 10));

    return 0;
}

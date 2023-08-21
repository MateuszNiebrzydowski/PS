#include <stdio.h>
#include <stdlib.h>

char *foo(char a[], int b)
{
    return a += b;
}

int main()
{
    char nap[] = "Hello world!";
    printf("%s\n", foo(nap, 4));

    return 0;
}

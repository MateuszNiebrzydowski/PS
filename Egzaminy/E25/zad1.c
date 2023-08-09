#include <stdio.h>
#include <stdlib.h>

char *foo(char *a, int b)
{
    int i = 0;
    while (a[i] != 0)
    {
        a[i] -= b;
        i++;
    }
    return a;
}

int main()
{
    char napis[] = "Negawat";
    printf("%s\n", napis);
    printf("%s\n", foo(napis, 10));

    return 0;
}

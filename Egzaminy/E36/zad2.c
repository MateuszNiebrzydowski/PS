#include <stdio.h>
#include <stdlib.h>

int count_char(char *napis, char znak)
{
    if (*napis == 0)
    {
        return 0;
    }
    if (znak == *napis)
    {
        return 1 + count_char(napis + 1, znak);
    }
    return count_char(napis + 1, znak);
}

int main()
{
    char n[] = "Hello world!";
    char z = 'l';
    printf("%d\n", count_char(n, z));

    return 0;
}

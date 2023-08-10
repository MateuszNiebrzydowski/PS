#include <stdio.h>
#include <stdlib.h>

char suma(int a, int tab[][a])
{
    int floppa = 0;
    for (int i = 0; i < a; i++)
    {
        floppa += tab[0][i];
    }
    char znak = floppa;

    return znak;
}

int main()
{
    int tab[2][3] = {{23, 14, 35}, {7, 5, 8}};
    printf("%c\n", suma(3, tab));

    return 0;
}

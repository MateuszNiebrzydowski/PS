#include <stdio.h>
#include <stdlib.h>

int isEqual(int a, int b)
{
    if (a == b)
    {
        return 1;
    }
    return 0;
}

int findElement(int tab[], int n, int val, int (*spr)(int, int))
{
    for (int i = 0; i < n; i++)
    {
        if (spr(tab[i], val) == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int tab[5] = {2, 3, 5, 1, 7};
    printf("%d\n", findElement(tab, 5, 1, isEqual));

    return 0;
}

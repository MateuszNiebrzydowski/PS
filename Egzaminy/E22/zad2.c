#include <stdio.h>
#include <stdlib.h>

char *reverseString(char *napis)
{
    char *rev = (char*)malloc(sizeof(napis));
    int s = 0;
    while (napis[s] != 0)
    {
        s++;
    }
    int i = 0, j = s - 1;
    while (i < s)
    {
        rev[i] = napis[j];
        i++;
        j--;
    }
    rev[i] = '\0';

    return rev;
}

int main()
{
    char nap[] = "KochamPrezydentaDude";
    printf("%s\n", reverseString(nap));

    return 0;
}

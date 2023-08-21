#include <stdio.h>
#include <stdlib.h>

struct Film {
    char *tytul;
    int rok;
    float ocena;
};

char *topRated(struct Film *tab, int n, int year)
{
    float rate = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (tab[i].rok == year && tab[i].ocena > rate)
        {
            rate = tab[i].ocena;
            index = i;
        }
    }
    if (index == -1)
    {
        return "\0";
    }

    return tab[index].tytul;
}

int main()
{
    struct Film arr[4] = {
    {"Pulp Fiction", 1994, 8.8},
    {"Barbie", 2023, 8.1},
    {"Oppenheimer", 2023, 7.9},
    {"Se7en", 1995, 9.2}
    };

    printf("%s\n", topRated(arr, 4, 2023));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Samochod {
    char marka[50];
    int przebieg;
};

struct Samochod *initSamochod(char *mar, int przeb)
{
    if (strlen(mar) < 2 || przeb <= 0)
    {
        return NULL;
    }

    struct Samochod *wsk = malloc(sizeof(struct Samochod));
    strcpy(wsk->marka, mar);
    wsk->przebieg = przeb;

    return wsk;
}

void zwiekszPrzebieg(struct Samochod *wsk)
{
    wsk->przebieg += 1000;
}

int main()
{
    char m[] = "BMW";
    int p = 44000;

    struct Samochod *ptr = initSamochod(m, p);
    if (ptr == NULL)
    {
        return 0;
    }

    printf("%s %d\n", ptr->marka, ptr->przebieg);
    zwiekszPrzebieg(ptr);
    printf("%s %d\n", ptr->marka, ptr->przebieg);

    return 0;
}

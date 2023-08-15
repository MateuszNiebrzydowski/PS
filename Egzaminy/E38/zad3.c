#include <stdio.h>
#include <stdlib.h>

struct Temperature {
    char *city;
    float temperature;
};

void printArr(struct Temperature *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s: %.1f\n", tab[i].city, tab[i].temperature);
    }
}

float average_temperature(struct Temperature *tab, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += tab[i].temperature;
    }
    float avg = sum / n;

    return avg;
}

int main()
{
    struct Temperature tab[3] = {
        {"Olsztyn", 32.4},
        {"Warszawa", 29.1},
        {"Gdansk", 33.7}
    };

    printArr(tab, 3);
    printf("Average temperature: %.2f\n", average_temperature(tab, 3));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

float suma(char n[], int x)
{
    float a = (float)n[1] / x;

    return a;
}

int main()
{
    char nap[] = "xyz";
    printf("%d\n", nap[1]);
    printf("%.2f\n", suma(nap, 3));

    return 0;
}

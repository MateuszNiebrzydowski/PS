#include <stdio.h>
#include <stdlib.h>

union Data {
    char a;
    double b;
};

enum DataType {CHAR, DOUBLE};

void printData(union Data data, enum DataType type)
{
    if (type == CHAR)
    {
        printf("%c\n", data.a);
    }
    else if (type == DOUBLE)
    {
        printf("%f", data.b);
    }
}

int main()
{
    union Data d1;
    d1.a = 'j';
    union Data d2;
    d2.b = 21.15;

    printData(d1, 0);
    printData(d2, 1);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void triple_double_value(double *x)
{
    *x = (*x) * 3;
}

int main()
{
    double a = 21.37;
    printf("%f\n", a);
    triple_double_value(&a);
    printf("%f\n", a);

    return 0;
}

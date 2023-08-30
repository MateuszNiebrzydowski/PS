#include <stdio.h>
#include <stdlib.h>

enum Month {January, February, March, April, May, June, July, August, September, October, November, December};

int days_in_month(enum Month m)
{
    if (m == 0 || m == 2 || m == 4 || m == 6 || m == 7 || m == 9 || m == 11)
    {
        return 31;
    }
    else if (m == 3 || m == 5 || m == 8 || m == 10)
    {
        return 30;
    }
    else if (m == 1)
    {
        return 28;
    }
    else
    {
        printf("Invalid month!\n");
    }
}

int main()
{
    printf("Number of days in month: %d\n", days_in_month(June));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

enum Day print_days(enum Day curDay, int n)
{
    printf("%d\n", curDay);

    if (n > 0)
    {
        if (curDay == 6)
        {
            curDay = -1;
        }
        return print_days(curDay+1, n-1);
    }
    return curDay;
}

int main()
{
    enum Day d1 = THURSDAY;
    print_days(d1, 5);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

enum DayOfWeek {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

void printDayOfWeek(enum DayOfWeek day)
{
    if (day == MONDAY)
    {
        printf("Today is Monday\n");
    }
    else if (day == TUESDAY)
    {
        printf("Today is Tuesday\n");
    }
    else if (day == WEDNESDAY)
    {
        printf("Today is Wednesday\n");
    }
    else if (day == THURSDAY)
    {
        printf("Today is Thursday\n");
    }
    else if (day == FRIDAY)
    {
        printf("Today is Friday\n");
    }
    else if (day == SATURDAY)
    {
        printf("Today is Saturday\n");
    }
    else if (day == SUNDAY)
    {
        printf("Today is Sunday\n");
    }
    else
    {
        printf("Invalid day\n");
    }
}

int main()
{
    printDayOfWeek(0);

    return 0;
}

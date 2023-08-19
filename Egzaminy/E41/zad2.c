#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int num(wchar_t *nap)
{
    int i = 0;
    while (nap[i] != 0)
    {
        if ((nap[i] < L'0') || (nap[i] > L'9'))
        {
           return 0;
        }
        i++;
    }
    int result = (nap[0] - L'0') * 100 + (nap[1] - L'0') * 10 + (nap[2] - L'0');

    return result;
}

int main()
{
    wchar_t napis[] = L"790";
    wprintf(L"%d\n", num(napis));

    return 0;
}

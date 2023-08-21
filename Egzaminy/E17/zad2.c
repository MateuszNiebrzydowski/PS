#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *napis)
{
    for (int i = 0, j = strlen(napis) - 1; i < strlen(napis) / 2; i++, j--)
    {
        if (napis[i] != napis[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char nap1[] = "kaaajaaak";
    char nap2[] = "kamilslimak";

    printf("%d %d\n", isPalindrome(nap1), isPalindrome(nap2));

    return 0;
}

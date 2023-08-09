#include <stdio.h>
#include <stdlib.h>

int findSubstring(char *str, char *sub)
{
   int i = 0;
   while (str[i] != 0)
   {
       int j = 0;
       int found = 1;
       while (sub[j] != 0)
       {
           if (str[i + j] != sub[j])
           {
               found = 0;
               break;
           }
           j++;
       }
       if (found)
       {
           return i;
       }
       i++;
   }
   return -1;
}

int main()
{
    char nap1[] = "bibimbimbao";
    char nap2[] = "bimba";
    printf("%d\n", findSubstring(nap1, nap2));

    return 0;
}

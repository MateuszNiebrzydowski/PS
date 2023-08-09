#include <stdio.h>
#include <stdlib.h>

void reverseArray(int n, int m, int tab[][m])
{
    for (int j = 0; j < m; j++)
    {
        if (j % 2 != 0)
        {
            for (int i = 0, k = n - 1; i < n/2; i++, k--)
            {
                int temp = tab[i][j];
                tab[i][j] = tab[k][j];
                tab[k][j] = temp;
            }
        }

    }
}

int main()
{
    int tab[5][4] = {{2, 3, -3, 0}, {1, 4, 7, 2}, {-3, -6, 11, 9}, {-2, 8, 23, 1}, {8, 5, 7, 4}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    reverseArray(5, 4, tab);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}

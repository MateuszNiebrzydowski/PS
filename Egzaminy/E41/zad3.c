#include <stdio.h>
#include <stdlib.h>

int **create(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = (int*) malloc(sizeof(int) * m);
    }
    return tab;
}

void printArr(int **tab, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", *(*(tab + i) + j));
        }
        printf("\n");
    }
    printf("\n");
}

void swap(int **tab, int n, int m)
{
    if (n >= 4)
    {
       int *temp = *(tab + 1);
       *(tab + 1) = *(tab + n - 2);
       *(tab + n - 2) = temp;
    }
}

int main()
{
    int **arr = create(5, 2);
    **arr = 2;
    *(*arr + 1) = 3;
    **(arr + 1) = 1;
    *(*(arr + 1) + 1) = 4;
    **(arr + 2) = -3;
    *(*(arr + 2) + 1) = -6;
    **(arr + 3) = -2;
    *(*(arr + 3) + 1) = 8;
    **(arr + 4) = -9;
    *(*(arr + 4) + 1) = 5;


    printArr(arr, 5, 2);
    swap(arr, 5, 2);
    printArr(arr, 5, 2);

    return 0;
}

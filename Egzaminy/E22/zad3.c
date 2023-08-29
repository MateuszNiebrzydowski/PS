#include <stdio.h>
#include <stdlib.h>

int **create(int n, int m)
{
    int **tab = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        *(tab + i) = (int*)malloc(sizeof(int) * m);
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

int **swapColumns(int **tab, int n, int m, int in1, int in2)
{
    if (in1 < m && in2 < m)
    {
        for (int i = 0; i < n; i++)
        {
            int **temp = *(*(tab + i) + in1);
            *(*(tab + i) + in1) = *(*(tab + i) + in2);
            *(*(tab + i) + in2) = temp;
        }
    }
    return tab;
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
    int **newArr = swapColumns(arr, 5, 2, 0, 1);
    printArr(newArr, 5, 2);

    return 0;
}

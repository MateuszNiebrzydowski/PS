#include <stdio.h>
#include <stdlib.h>

int *init_block_int()
{
    int *block = (int*)malloc(4*sizeof(int));
    *block = 1;
    for (int i = 2; i <= 4; i++)
    {
        block++;
        *block = i;
    }
    return block-1;
}

int main()
{
    int *ptr = init_block_int();
    printf("%d %d %d %d\n", *(ptr-2), *(ptr-1), *(ptr), *(ptr+1));

    return 0;
}

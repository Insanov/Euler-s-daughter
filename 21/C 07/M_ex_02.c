#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
    int array[50] = {0};
    int *pointer = array;
    int *baba = array;
    int result = 3;
    result = ft_ultimate_range(&pointer, 0, 35);

    return 0;
}

int ft_ultimate_range(int **range, int min, int max)
{
    *range = (int *)malloc((max - min) * 4);

    for (int i = min, j = 0; i < max; i++, j++)
        *(*range + j) = i;

    return (max - min >= 0) ? max - min : 0;
}
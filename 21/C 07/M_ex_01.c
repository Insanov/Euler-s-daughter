#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
    char str[] = "Happy Easter";
    int *result = ft_range(0, 100000000);

    return 0;
}

int *ft_range(int min, int max)
{
    int *arr = malloc((max - min) * 4);
    if (!arr)
        return arr;

    for (int i = min, j = 0; i < max; i++, j++)
        arr[j] = i;

    return arr;
}
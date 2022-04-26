#include <stdio.h>

int ft_fibonacci(int index, int *cache);

int main()
{
    int cache[100] = {0};
    int result = ft_fibonacci(10, cache);

    printf("%d", result);

    return 0;
}

int ft_fibonacci(int index, int *cache)
{
    if (index <= 1)
        return index;
    else if (cache[index] == 0)
        cache[index] =  ft_fibonacci(index - 1, cache) + ft_fibonacci(index - 2, cache);
    return cache[index];
}
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    int result = ft_iterative_factorial(5);

    printf("%d", result);

    return 0;
}

int ft_iterative_factorial(int nb)
{
    int result = 1;

    for(int j = 1; j < nb + 1; j++)
        result *= j;

    return result;
}
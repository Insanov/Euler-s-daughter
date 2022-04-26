#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
    int result = ft_iterative_power(5, 3);
    printf("%d", result);

    return 0;
}

int ft_iterative_power(int nb, int power)
{
    int result = 1;
    
    for(int i = 0; i < power; i++)
        result *= nb;

    return result;
}
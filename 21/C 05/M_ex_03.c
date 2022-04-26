#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
    int result = ft_recursive_power(3, 5);

    printf("%d", result);
    
    return 0;
}

int ft_recursive_power(int nb, int power)
{
    if (0 == power)
        return 1;
    return ft_recursive_power(nb, power - 1) * nb;
}
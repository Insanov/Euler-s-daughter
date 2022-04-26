#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
    int result = ft_is_prime(1);

    printf("%d", result);

    return 0;
}

int ft_is_prime(int nb)
{
    if (0 == nb || nb == 1)
        return 0;
        
    int divisor = 2;
    while(divisor < nb)
    {
        if (nb % divisor == 0)
            return 0;
        divisor++;
    }

    return 1;
}
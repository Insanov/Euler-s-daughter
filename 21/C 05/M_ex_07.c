#include <stdio.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main()
{
    int result = ft_find_next_prime(350);

    printf("%d", result);

    return 0;
}

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb) == 1)
        return nb;
    
    int result = nb + 1;
    while(ft_is_prime(result) != 1)
        result++;

    return result;
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
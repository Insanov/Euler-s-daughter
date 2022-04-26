#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
    int result = ft_sqrt(49);

    printf("%d", result);

    return 0;
}

int ft_sqrt(int nb)
{
    int divisor, result;

    while(divisor * divisor > nb)
    {
        divisor = nb / 2;
        nb /= 2;
    }
    
    while (result <= nb)
    {
        result = divisor * divisor;
        if (result == nb)
            return divisor;
        divisor++;
    }

    return 0;
}
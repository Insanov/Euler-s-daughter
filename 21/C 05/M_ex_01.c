#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
    int result = ft_recursive_factorial(5);
    
    printf("%d", result);
    
    return 0;
}

int ft_recursive_factorial(int nb)
{
    if (0 == nb)
        return 1;
    return ft_recursive_factorial(nb - 1) * nb;

}
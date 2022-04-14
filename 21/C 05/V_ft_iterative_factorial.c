int ft_iterative_factorial(int nb);

int main(void)
{
    int factorial = ft_iterative_factorial(50);

    return 0;
}

int ft_iterative_factorial(int nb)
{
    if (nb < 0)
        return 0;

    int result = 1;

    while (nb >= 2)
        result *= nb--;

    return result;
}
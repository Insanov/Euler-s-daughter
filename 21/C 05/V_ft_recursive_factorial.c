int ft_recursive_factorial(int nb);

int main(void)
{
    int factorialResult = ft_recursive_factorial(49);

    return 0;
}

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return 1;

    if (nb < 0)
        return 0;

    return nb * ft_recursive_factorial(nb - 1);
}
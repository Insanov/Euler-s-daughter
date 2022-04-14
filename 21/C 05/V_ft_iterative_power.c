int ft_iterative_power(int nb, int power);

int main(void)
{
    int powerResult = ft_iterative_power(2, 0);

    return 0;
}

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return 0;

    int result = 1;

    while (power--)
    {
        result *= nb;
    }

    return result;
}
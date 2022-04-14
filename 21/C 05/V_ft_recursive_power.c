int ft_recursive_power(int nb, int power);

int main(void)
{
    int powerResult = ft_recursive_power(2, 10);

    return 0;
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;

    return nb * ft_recursive_power(nb, power - 1);
}
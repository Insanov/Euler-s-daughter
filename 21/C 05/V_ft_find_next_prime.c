int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main(void)
{
    int nextPrime = ft_find_next_prime(2040);

    return 0;
}

int ft_find_next_prime(int nb)
{
    while (!ft_is_prime(nb++))
        ;

    return nb - 1;
}

int ft_is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return 0;

    for (int i = 2; i <= nb / 2; i++)
    {
        if (nb % i == 0)
            return 0;
    }

    return 1;
}
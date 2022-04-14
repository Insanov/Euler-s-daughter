int ft_is_prime(int nb);

int main(void)
{
    int isPrime = ft_is_prime(11);

    return 0;
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
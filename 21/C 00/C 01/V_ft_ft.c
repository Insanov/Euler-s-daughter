void ft_ft(int *nbr);

int main(void)
{
    int test = 100;

    ft_ft(&test);

    return 0;
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}
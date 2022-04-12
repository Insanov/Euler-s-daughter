void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 125;
    int b = 11;

    ft_ultimate_div_mod(&a, &b);

    return 0;
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;

    *a = div;
    *b = mod;
}
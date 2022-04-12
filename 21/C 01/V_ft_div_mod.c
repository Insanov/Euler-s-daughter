void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 125;
    int b = 11;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
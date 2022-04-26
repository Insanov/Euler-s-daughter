#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp, tmp_1;

    tmp = *a / *b;
    tmp_1 = *a % *b;
    *a = tmp;
    *b = tmp_1;
}

int main()
{
    int a = 125;
    int b = 23;

    ft_ultimate_div_mod(&a, &b);
    printf("%d, %d", a, b);

    return 0;
}
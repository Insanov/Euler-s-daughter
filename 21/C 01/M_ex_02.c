#include <stdio.h>

void ft_swap(int *pupa, int *za)
{
    int lupa;
    lupa = *pupa;
    *pupa = *za;
    *za = lupa;
}

int main()
{
    int kumber = 88;
    int pupumber = 14;

    ft_swap(&kumber, &pupumber);
    printf("%d/%d", kumber, pupumber);

    return 0;
}
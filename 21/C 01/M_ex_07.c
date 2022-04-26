#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
    int arr[4] = {0, 3, 5, 7};
    ft_rev_int_tab(arr, 4);

    return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
    int tmp, i;

    for (i = 0; i < size / 2; i++)
    {
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
    }
}
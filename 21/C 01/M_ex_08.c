#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int arr[10] = {100, 78, 39, 5, 6, 27, 7, 8, 8, 15};

    ft_sort_int_tab(arr, 10);
    
    return 0;
}

void ft_sort_int_tab(int *tab, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int k = i; (k > 0) && (tab[k - 1] > tab[k]); k--)
        {
            int tmp = tab[k];
            tab[k] = tab[k - 1];
            tab[k - 1] = tmp;
        }
    }
}
#include <unistd.h>

void ft_print_combn(int number);
void ft_print_combn_helper(int arr[], int prevDigit, int size, int isLast);
void ft_putchar(char c);

int main(void)
{
    ft_print_combn(9);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int number)
{
    int arr[number];

    for (int i = 0; i < number; i++)
    {
        arr[i] = 0;
    }

    ft_print_combn_helper(arr, 0, number, 1);
}

void ft_print_combn_helper(int arr[], int currIndex, int size, int isLast)
{
    if (currIndex == size)
    {
        for (int i = 0; i < size; i++)
        {
            ft_putchar(arr[i] + '0');
        }

        if (!isLast)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }

        return;
    }

    for (int i = currIndex == 0 ? 0 : arr[currIndex - 1] + 1; i < 10; i++)
    {
        arr[currIndex] = i;
        ft_print_combn_helper(arr, currIndex + 1, size, isLast ? (size - currIndex + i == 10 ? 1 : 0) : 0);
    }
}
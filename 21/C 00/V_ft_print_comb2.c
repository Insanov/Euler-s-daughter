#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

int main(void)
{
    ft_print_comb2();
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2()
{
    int first, second;

    first = 0;
    while (first <= 99)
    {
        second = first + 1;

        while (second <= 99)
        {
            ft_putchar(first / 10 + '0');
            ft_putchar(first % 10 + '0');

            ft_putchar(' ');

            ft_putchar(second / 10 + '0');
            ft_putchar(second % 10 + '0');

            if (first != 98 || second != 99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }

            second++;
        }

        first++;
    }
}
#include <unistd.h>

void ft_print_numbers(void);

int main(void)
{
    ft_print_numbers();
}

void ft_print_numbers()
{
    char currentDigit = '0';

    while (currentDigit <= '9')
    {
        write(1, &currentDigit, 1);
        currentDigit++;
    }
}
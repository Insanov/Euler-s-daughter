#include <unistd.h>

void ft_putnbr(int number);
void ft_putchar(char c);

int main(void)
{
    ft_putnbr(2147483647);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int number)
{
    if (number < 0)
    {
        ft_putchar('-');
    }

    int reversedDigits[10];
    int currIndex = 0;

    while (number != 0)
    {
        reversedDigits[currIndex] = number >= 0 ? number % 10 : -(number % 10);
        number /= 10;
        currIndex++;
    }

    for (int i = currIndex - 1; i >= 0; i--)
    {
        ft_putchar(reversedDigits[i] + '0');
    }
}
#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    ft_putchar('a');
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
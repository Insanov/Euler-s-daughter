#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
    char input[] = "Hello world!";

    ft_putstr(input);
}

void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);

        str++;
    }
}
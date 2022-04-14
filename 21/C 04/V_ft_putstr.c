#include <unistd.h>

void ft_putstr(char *str);

int main(void)
{
    char str[] = "Some random string once again, let's see if it's printed";

    ft_putstr(str);

    return 0;
}

void ft_putstr(char *str)
{
    unsigned int i = 0;

    while (str[i])
        write(1, str + i++, 1);
}
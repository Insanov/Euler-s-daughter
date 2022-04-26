#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int main()
{
    int i = 0;
    char stripe[] = "Hello, world!";
    ft_putstr(&stripe);

    return 0;
}

void ft_putstr(char *str)
{
    write(1, str, 15);
}

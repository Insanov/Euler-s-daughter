#include <unistd.h>

void ft_putchar()
{
    int i;
    char digit = '0';
    for(i = 0; i < 10; i++)
        //printf("%d", i);
        write(1, &digit, 1);
        digit++;
}

int main()
{
    ft_putchar();
    return 0;
}

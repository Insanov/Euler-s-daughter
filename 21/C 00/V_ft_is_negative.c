#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
    ft_is_negative(-2147483648);
}

void ft_is_negative(int n)
{
    const char negative = 'N';
    const char positive = 'P';

    if (n < 0)
    {
        write(1, &negative, 1);
    }
    else
    {
        write(1, &positive, 1);
    }
}
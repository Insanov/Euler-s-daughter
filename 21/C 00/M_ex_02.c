#include <unistd.h>

void ft_putchar()
{
    int i;
    char letter = 'z';
    for(i = 26; i > 0; i--)
    {
        write(1, &letter, 1);
        letter--;
    }
}

int main()
{
    ft_putchar();
    return 0;
}

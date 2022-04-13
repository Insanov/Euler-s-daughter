#include <unistd.h>

void ft_putchar()
{
    int i;
    char letter = 'a';
    for(i = 0; i < 26; i++)
    {
        write(1, &letter, 1);
        letter += 1;
    }
}

int main()
{
    ft_putchar();
    return 0;
}

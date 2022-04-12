#include <unistd.h>

void ft_print_alphabet(void);

int main(void)
{
    ft_print_alphabet();
}

void ft_print_alphabet()
{
    char currentChar = 'a';

    while (currentChar <= 'z')
    {
        write(1, &currentChar, 1);
        currentChar++;
    }
}
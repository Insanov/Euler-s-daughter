#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main(void)
{
    ft_print_reverse_alphabet();
}

void ft_print_reverse_alphabet()
{
    char currentChar = 'z';

    while (currentChar >= 'a')
    {
        write(1, &currentChar, 1);
        currentChar--;
    }
}
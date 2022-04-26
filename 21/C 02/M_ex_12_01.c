#include <unistd.h>

void convert_base(long long number);

int main()
{
    char src[20] = "Coucoutu vas bien ?";
    long long addr = ((long long)&src);

    printf("%p\n", &src);
    convert_base(addr);

    return 0;
}

void ft_putstr_non_printable(char a)
{
    int first_digit;
    int second_digit;
    char rem[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

    first_digit = src[i] / 16 + 48;
    second_digit = src[i] % 16;
    if (second_digit > 9)
        second_digit = rem[second_digit % 10];
    else
        second_digit += 48;
}
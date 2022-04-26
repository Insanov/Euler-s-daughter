#include <unistd.h>

void ft_putstr_non_printable(char *str);

int main()
{
    char src[20] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(src);

    return 0;
}

void ft_putstr_non_printable(char *src)
{
    int first_digit;
    int second_digit;
    char rem[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

    for (int i = 0; src[i]; i++)
    {
        if ((src[i] > 1 && src[i] < 32) || (src[i] == 127))
        {
            first_digit = src[i] / 16 + 48;
            second_digit = src[i] % 16;
            if (second_digit > 9)
                second_digit = rem[second_digit % 10];
            else
                second_digit += 48;

            write(1, "\\", 1);
            write(1, &first_digit, 1);
            write(1, &second_digit, 1);
        }
        else
            write(1, &src[i], 1);
    }
}

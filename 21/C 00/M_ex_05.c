#include <unistd.h>

void ft_print_comb(void)
{
    char first_digit, second_digit, third_digit;

    first_digit = 48;
    while (first_digit <= 55)
    {
        for(second_digit = first_digit + 1; second_digit < 57; second_digit++)
        {
            for(third_digit = second_digit + 1; third_digit < 58; third_digit++)
                {
                    if ((first_digit == 55) && (second_digit == 56))
                    {
                        write(1, &first_digit, 1);
                        write(1, &second_digit, 1);
                        write(1, &third_digit, 1);
                    }
                    else
                    {
                        write(1, &first_digit, 1);
                        write(1, &second_digit, 1);
                        write(1, &third_digit, 1);
                        write(1, ", ", 2);
                    }
                }
        }
        first_digit++;
    }
}

int main()
{
    ft_print_comb();
    return 0;
}

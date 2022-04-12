#include <unistd.h>

void ft_print_comb(void);

int main(void)
{
    ft_print_comb();
}

void ft_print_comb(void)
{
    char firstDigit, secondDigit, thirdDigit;
    char comma = ',';
    char space = ' ';

    firstDigit = '0';
    while (firstDigit <= '9')
    {
        secondDigit = firstDigit + 1;

        while (secondDigit <= '9')
        {
            thirdDigit = secondDigit + 1;

            while (thirdDigit <= '9')
            {
                if (firstDigit < secondDigit && secondDigit < thirdDigit)
                {
                    write(1, &firstDigit, 1);
                    write(1, &secondDigit, 1);
                    write(1, &thirdDigit, 1);

                    if (firstDigit != '7' || secondDigit != '8' || thirdDigit != '9')
                    {
                        write(1, &comma, 1);
                        write(1, &space, 1);
                    }
                }

                thirdDigit++;
            }

            secondDigit++;
        }

        firstDigit++;
    }
}
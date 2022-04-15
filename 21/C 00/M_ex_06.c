#include <unistd.h>

void ft_print_comb(void)
{
    char f_first_number, s_first_number, f_second_number, s_second_number;
    f_first_number = 48;
    s_first_number = 48;
    while (f_first_number != 58 && s_first_number != 57)
    {
        s_first_number = 48;
        while (s_first_number < 58)
        {
            for(f_second_number = f_first_number; f_second_number < 58; f_second_number++)
            {
                if (f_second_number == f_first_number)
                {
                    for(s_second_number = s_first_number + 1; s_second_number < 58; s_second_number++)
                    {
                        if (f_first_number == 57 && s_first_number == 56 && f_second_number == 57 && s_second_number == 57)
                        {
                            write(1, &f_first_number, 1);
                            write(1, &s_first_number, 1);
                            write(1, " ", 1);
                            write(1, &f_second_number, 1);
                            write(1, &s_second_number, 1);
                        }
                        else
                        {
                            write(1, &f_first_number, 1);
                            write(1, &s_first_number, 1);
                            write(1, " ", 1);
                            write(1, &f_second_number, 1);
                            write(1, &s_second_number, 1);
                            write(1, ",", 1);
                        }
                    }
                }
                else
                {
                    for(s_second_number = f_second_number; s_second_number < 58; s_second_number++)
                    {
                        write(1, &f_first_number, 1);
                        write(1, &s_first_number, 1);
                        write(1, " ", 1);
                        write(1, &f_second_number, 1);
                        write(1, &s_second_number, 1);
                        write(1, ",", 1);
                    }
                }
            }
            s_first_number++;
        }
        f_first_number++;
    }

}

int main(void)
{
    ft_print_comb();
    return 0;
}


#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);
void print_number(int nbr, int count, char *base);
int is_digit_in(char sym, char *base, int count);

int main()
{
    int number = 2147483647;
    char base[] = "poneyvif";
    ft_putnbr_base(number, base);

    return 0;
}

void ft_putnbr_base(int nbr, char *base)
{
    int count = 0;

    for (; base[count]; count++)
    {
        if(base[count] == '+' || base[count] == '-') return;
        int result = is_digit_in(base[count], base, count);
        if(result > 1) return;

        continue;
    }
    
    if (count > 1)
    {
        if (nbr < 0)
            write(1, "-", 1);
        print_number(nbr, count, base);
    }
}

void print_number(int nbr, int count, char *base)
{
    char final_number[100];
    int i = 0;

    if (nbr >= 0)
    {
        while (nbr != 0)
        {
            int rem = nbr % count;
            char digit = base[rem];
            final_number[i++] = digit;
            nbr /= count;
        }
    }
    else
    {
        while (nbr != 0)
        {
            int rem = -(nbr % count);
            char digit = base[rem];
            final_number[i++] = digit;
            nbr /= count;
        }
    }
    for (--i; i > -1; i--)
        write(1, &final_number[i], 1);
}

int is_digit_in(char sym, char *base, int count)
{
    int k = 0;

    for(; base[count]; count++)
    {
        if (base[count] == sym)
            k++;
    }

    return k;
}
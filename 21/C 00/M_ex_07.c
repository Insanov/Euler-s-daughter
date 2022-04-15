#include <unistd.h>

int degree(int nb, int dg)
{
    int i, answer;
    if (dg == 0)
        return 1;
    else
    {
        answer = 1;
        for (i = 0; i < dg; i++)
        {
            answer *= nb;
        }
        return answer;
    }
}

void ft_putchar(int number)
{
    char a;
    int i, k, count, copy_number;
    copy_number = number;
    count = 0;
    i = 0;
    if (number < 0)
        write(1, "-", 1);
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    for (k = count - 1; k > -1; k--)
    {
        a = (number < 0) ? 48 - copy_number / degree(10, k) % 10 : 48 - copy_number / degree(10, k) % 10;
        write(1, &a, 1);
        i++;
    }
}

int main()
{
    ft_putchar(-2147483648);
    return 0;
}

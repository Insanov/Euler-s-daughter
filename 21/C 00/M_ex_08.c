#include <unistd.h>

void ft_print_combn(int N)
{
    int arr[10] = {-1};
    gen_number(0, N, arr);
}

int main()
{
    ft_print_combn(5);
    return 0;
}

void gen_number(int i, int N, int arr[])
{
    if (i == N)
    {
        char digit;
        for (int j = 0; j < N; j++)
        {
            digit = 48 + arr[j];
            write(1, &digit, 1);
        }
        write(1, ", ", 2);
        return;
    }

    for (int k = arr[i - 1 < 0 ? i : i - 1] + 1; k < 10; k++)
    {
        arr[i] = k;
        gen_number(i + 1, N, arr);
    }
}
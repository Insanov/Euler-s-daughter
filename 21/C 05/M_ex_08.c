#include <unistd.h>
#include <stdio.h>

int ft_ten_queens_puzzle(void);
int not_in_array(int *arr, int digit);
int *column(int *arr, int i, int count);

int main()
{
    int result = ft_ten_queens_puzzle();

    printf("%d", result);

    return 0;
}

int ft_ten_queens_puzzle(void)
{
    int arr[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int first_digit = 0, i = 0, count = 0, result = 0;
    for (; first_digit < 10; first_digit++)
    {
        arr[i] = first_digit;
        result += column(arr, i, count);
    }
    return result;
}

int *column(int *arr, int i, int count)
{
    for (int digit = 0; digit < 10; digit++)
    {
        if ((arr[i] + digit > 1) && (arr[i] + digit < 17) && (arr[i] > digit + 1 || digit > arr[i] + 1) && (not_in_array(arr, digit) == 1))
        {
            i++;
            arr[i] = digit;
            column(arr, i, count);
            return arr;
        }
    }
    if (i == 9)
    {
        for (int j = 0; j < 10; j++)
        {
            char char_digit = arr[j] + 48;
            write(1, &char_digit, 1);
        }
        write(1, "\n", 1);
    }
}

int not_in_array(int *arr, int digit)
{
    int i = 0;
    while (arr[i] != -1)
    {
        if (arr[i] == digit)
            return 0;
        i++;
    }

    return 1;
}

#include <stdbool.h>

_Bool narcissistic(int num);
int power(int base, int degree);

int main()
{
    narcissistic(153);
    return 0;
}

_Bool narcissistic(int num)
{
    int length = 0, sum = 0, i = 0, rem;
    int copy_num = num;
    int arr[10];

    while (num)
    {
        rem = num % 10;
        arr[i++] = rem;
        length++;
        num /= 10;
    }
    for (i = 0; i < length; i++)
        sum += power(arr[i], length);

    if (sum == copy_num)
        return true;
    else
        return false;
}

int power(int base, int degree)
{
    int result = 1;
    for (int i = 0; i < degree; i++)
        result *= base;

    return result;
}
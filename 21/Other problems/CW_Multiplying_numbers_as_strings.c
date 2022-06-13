#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *multiply(char *a, char *b);

long long main()
{
    char a[] = "98765";
    char b[] = "56894";
    multiply(a, b);

    return 0;
}
char *multiply(char *a, char *b)
{
    long long i;
    long long size_a = 0;
    long long size_b = 0;
    for (long long i = 0; a[i]; i++)
        size_a++;
    for (long long i = 0; b[i]; i++)
        size_b++;

    long long a_long = 0, b_long = 0;
    char *result = malloc((size_a + size_b + 3) * sizeof(char));

    for (long long i = 0; a[i]; i++, size_a--)
        a_long += (a[i] - 48) * pow(10, size_a - 1);

    for (long long i = 0; b[i]; i++, size_b--)
        b_long += (b[i] - 48) * pow(10, size_b - 1);

    long long result_long = a_long * b_long;
    long long tmp_result_long  = result_long;
    long long length = 0;

    while (tmp_result_long)
    {
        length++;
        tmp_result_long /= 10;
    }
    long long tmp_length = length;
    for (i = 0; i < length; i++, tmp_length--)
        if (0 == i)
            result[i] = 48 + (result_long / pow(10, tmp_length - 1));
        else
            result[i] = 48 + ((long long)(result_long / pow(10, tmp_length - 1)) % 10);
    result[i] = '\0';

    return result;
}
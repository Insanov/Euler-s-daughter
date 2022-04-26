#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
int power(int base, int degree);
int convert_from_char_to_int(char *nbr);
int convert_to_dec(char *nbr, int base_f);

int main()
{
    char nbr[] = "234677";
    char base_from[] = "8";
    char base_to[] = "16";
    char *pointer = ft_convert_base(&nbr, &base_from, &base_to);

    return 0;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int base_f = convert_from_char_to_int(base_from);
    int base_t = convert_from_char_to_int(base_to);
    int result = convert_to_dec(nbr, base_f);
    int result_copy = result;
    char alphabet[] = "ABCDEF";
    int count = 0;

    while (result)
    {
        count++;
        result /= base_t;
    }

    char *array = malloc((count + 1) * sizeof(char));
    int i = 0;

    while (result_copy)
    {
        int rem = result_copy % base_t;
        if (rem > 9)
            array[i] = alphabet[rem % 10];
        else
            array[i] = rem + 48;
        result_copy /= base_t;
        i++;
    }

    char *number = malloc(i + 1 * sizeof(char));
    int j = 0;

    for (; i > -1; i--, j++)
    {
        number[j] = array[i];
        write(1, &number[j], 1);
    }
    free(array);

    return number;
}

int power(int base, int degree)
{
    int result = 1;
    for (int i = 0; i < degree; i++)
        result *= base;

    return result;
}

int convert_from_char_to_int(char *nbr)
{
    int i = 0, j = 0, result = 0;

    while (nbr[i++])
        ;

    int *arr = malloc(i * sizeof(int));
    i = 0;

    while (nbr[i])
    {
        arr[i] = nbr[i] - 48;
        i++;
    }

    int count = i - 1;

    for (; j < i; j++)
        result += arr[j] * power(10, count--);

    return result;
}

int convert_to_dec(char *nbr, int base_f)

{
    int i = 0, j = 0, result = 0;

    while (nbr[i++])
        ;

    int *arr = malloc(i * sizeof(int));
    i = 0;

    while (nbr[i])
    {
        arr[i] = nbr[i] - 48;
        i++;
    }

    int count = i - 1;

    for (; j < i; j++)
        result += arr[j] * power(base_f, count--);

    return result;
}

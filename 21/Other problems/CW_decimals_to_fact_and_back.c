#include <stdlib.h>

typedef unsigned long long ull;
char *dec2FactString(ull decimal);
ull factString2Dec(const char *factorial);
ull fact(ull number);

int main()
{
    dec2FactString(2982);
    const char stripe[] = "341010";
    factString2Dec(stripe);

    return 0;
}

char *dec2FactString(ull decimal)
{
    int i = 1, rem;
    ull copy_decimal = decimal;
    while (copy_decimal)
        copy_decimal /= i++;

    char *result = (char *)malloc(i * sizeof(char));
    int j = 1;
    result[--i] = '\0';
    while (decimal)
    {
        rem = decimal % j;
        result[--i] = rem;
        decimal /= j++;
    }

    return result;
}

ull factString2Dec(const char *factorial)
{
    int i = 0, j = 0;
    ull number = 0;
    while (factorial[i++])
        ;
    int digit = i - 2;
    while (factorial[j])
        number += (factorial[j++] - 48) * fact(digit--);
    return number;
}

ull fact(ull number)
{
    ull result = 1;

    for (ull i = 1; i < number + 1; i++)
        result *= i;

    return result;
}

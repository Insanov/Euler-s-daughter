#include <string.h>

int from_roman(char *str);
int main()
{
    char number[] = "MMVIII";
    from_roman(number);
    return 0;
}
int from_roman(char *str)
{
    int storage[13] = {0}; //{M, D, C, L, X, V, I, CM, CD, XC, XL, IX, IV}
    int i = 0;

    for (; str[i]; i++)
    {
        if (i > 0 && ((str[i] > str[i - 1]) || (str[i - 1] - str[i] == 21) || (str[i - 1] - str[i] == 12)))
        {
            if (str[i] == 'M')
            {
                storage[7] += 900;
                storage[2] -= 100;
            }
            if (str[i] == 'D')
            {
                storage[8] += 400;
                storage[2] -= 100;
            }
            if (str[i] == 'C')
            {
                storage[9] += 90;
                storage[4] -= 10;
            }
            if (str[i] == 'L')
            {
                storage[10] += 40;
                storage[4] -= 10;
            }
            if (str[i] == 'X')
            {
                storage[11] += 9;
                storage[6] -= 1;
            }
            if (str[i] == 'V')
            {
                storage[12] += 4;
                storage[6] -= 1;
            }
        }
        else if (i >= 0)
        {
            if (str[i] == 'M')
                storage[0] += 1000;
            if (str[i] == 'D')
                storage[1] += 500;
            if (str[i] == 'C')
                storage[2] += 100;
            if (str[i] == 'L')
                storage[3] += 50;
            if (str[i] == 'X')
                storage[4] += 10;
            if (str[i] == 'V')
                storage[5] += 5;
            if (str[i] == 'I')
                storage[6] += 1;
        }
    }
    int result = 0;

    for (int j = 0; j < 13; j++)
        result += storage[j];

    return result;
}

void to_roman(int number, char *destination)
{
    // write the roman number to destination
}
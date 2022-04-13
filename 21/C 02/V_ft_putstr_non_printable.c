#include <unistd.h>

void ft_putstr_non_printable(char *str);
void printAsciiAsHex(int code);
char convertToHexChar(int digit);

int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(str);

    return 0;
}

void ft_putstr_non_printable(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (str[i] <= 31 || str[i] >= 127)
        {
            printAsciiAsHex((int)str[i]);
        }
        else
        {
            write(1, &str[i], 1);
        }

        i++;
    }
}

void printAsciiAsHex(int code)
{
    char backslash = '\\';
    char firstDigit = convertToHexChar(code / 16);
    char secondDigit = convertToHexChar(code % 16);

    write(1, &backslash, 1);
    write(1, &firstDigit, 1);
    write(1, &secondDigit, 1);
}

char convertToHexChar(int digit)
{
    if (digit < 10)
        return (char)digit + 48; // 48 - ascii code for 0
    return (char)digit - 10 + 97;
}
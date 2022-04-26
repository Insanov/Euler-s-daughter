#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

int main()
{
    char str[] = "n\t";
    int result = ft_str_is_printable(str);

    return 0;
}

int ft_str_is_printable(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!(str[i] >= 32 && str[i] <= 127))
            return 0;
    }
    return 1;
}
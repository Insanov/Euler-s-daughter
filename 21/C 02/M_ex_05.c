#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main()
{
    char str[] = "yf";
    int result = ft_str_is_uppercase(str);

    return 0;
}

int ft_str_is_uppercase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}

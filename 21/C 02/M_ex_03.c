#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main()
{
    char str[] = "225";
    int result = ft_str_is_numeric(str);

    return 0;
}

int ft_str_is_numeric(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
    }
    return 1;
}

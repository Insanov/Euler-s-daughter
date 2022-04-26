#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char str[] = "";
    int result = ft_str_is_lowercase(str);

    return 0;
}

int ft_str_is_lowercase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
    }
    return 1;
}

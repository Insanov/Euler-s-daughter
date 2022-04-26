#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int main()
{
    char str[] = "sfhsduj";
    int result = ft_str_is_alpha(str);

    return 0;
}

int ft_str_is_alpha(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
            return 0;
    }
    return 1;
}

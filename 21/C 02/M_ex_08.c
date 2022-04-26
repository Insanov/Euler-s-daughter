#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main()
{
    char str[] = "n1512j6hGJGJW4";
    char *result = ft_strlowcase(str);

    return 0;
}

char *ft_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)

        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

    return str;
}
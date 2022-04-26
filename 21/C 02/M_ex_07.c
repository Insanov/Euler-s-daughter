#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main()
{
    char str[] = "n1512j6hGJGJW4";
    char *result = ft_strupcase(str);

    return 0;
}

char *ft_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)

        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;

    return str;
}
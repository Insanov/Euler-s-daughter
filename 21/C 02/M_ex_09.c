#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main()
{
    char str[] = "n1512, j6-h-GJGJ:W4";
    char *result = ft_strcapitalize(str);

    return 0;
}

char *ft_strcapitalize(char *str)
{
    for (int i = 0; str[i]; i++)

        if (!(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
            if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
                str[i + 1] -= 32;

    return str;
}
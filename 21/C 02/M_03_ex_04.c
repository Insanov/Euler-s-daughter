#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{

    char str[] = "hahahabc";
    char to_find[] = "ab";

    char *result = ft_strstr(str, to_find);

    return 0;
}

char *ft_strstr(char *str, char *to_find)
{
    int i = 0, count = 0, result, k;

    while (to_find[i])
    {
        count++;
        i++;
    }

    for (int j = 0; str[j]; j++)
    {
        result = j;
        if (str[j] == to_find[0])
        {
            for (k = 1; k < count; k++)
                if (str[j + k] != to_find[k])
                {
                    k = 0;
                    break;
                }

                else if (str[j + k] == to_find[k] && k == count - 1)
                    return str + result;
        }
    }

    return NULL;
}
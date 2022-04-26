#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "gdjstj";
    char dest[] = "othafhjiafhdafh";
    ft_strncpy(dest, src, 0);

    return 0;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    for (; src[i] && i < n; i++)
        dest[i] = src[i];

    for(;i < n; i++)
        dest[i] = '\000';

    return dest;
}

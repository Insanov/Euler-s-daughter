#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
    int count = 0;
    char src[] = "german nazi";
    char dest[] = "loh";
    
    ft_strcpy(dest, src);

    return 0;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }

    return dest;
}
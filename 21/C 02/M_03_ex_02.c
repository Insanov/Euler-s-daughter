#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char src[] = "first string";
    char dest[30] = "second string";
    
    ft_strcat(&dest, &src);
    printf("%s", dest);

    return 0;
}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;

    while(src[i])
        i++;

    for (int j = 0; src[j]; j++)
        dest[j + i] = src[j];
    
    return dest;
}
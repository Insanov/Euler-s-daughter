#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char src[] = "first string";
    char dest[30] = "second string";
    
    ft_strncat(&dest, &src, 1);
    printf("%s", dest);

    return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;

    while(dest[i])
        i++;

    for(unsigned int j = 0; j < nb; j++)
        dest[i + j] = src[j];

    return dest;
}
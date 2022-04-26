#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[20] = "n1512, j6-h-GJGJ:W4";
    char dest[] = "sdghpltyuyibo";
    ft_strlcpy(dest, src, 7);

    return 0;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    for (; src[i] && i < size; i++)
        dest[i] = src[i];
    dest[i] = '\000';

    return i;
}

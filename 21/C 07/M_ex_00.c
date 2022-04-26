#include <stdlib.h>
#include <unistd.h>

char *ft_strdup(char *str);

int main()
{
    char str[] = "Happy Easter";
    ft_strdup(str);

    return 0;
}

char *ft_strdup(char *str)
{
    int count = 0;

    for (; str[count]; count++)
        ;

    char *new_str = malloc(count + 1);
    if (!new_str) return new_str;

    for (int i = 0; i < count; i++)
    {
        *(new_str + i) = str[i];
        write(1, new_str + i, 1);
    }
    return new_str;    
}
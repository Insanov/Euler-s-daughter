#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main()
{
    int i;
    char stripe[] = "Hello, world!";
    
    i = ft_strlen(&stripe);
    printf("%d", i);
    
    return 0;
}

int ft_strlen(char *str)
{
    int count;

    while (*str)
    {
        str++;
        count++;
    }

    return count;
}

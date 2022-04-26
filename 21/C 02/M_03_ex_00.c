#include <unistd.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char s1[] = "akkk";
    char s2[] = "akkk";

    int result = ft_strcmp(&s1, &s2);

    return 0;
}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i])
    {
        if (s1[i] > s2[i])
            return 1;
        else if (s2[i] > s1[i])
            return -1;
        i++;
    }
    if (s2[i])
        return -1;

    return 0;
}
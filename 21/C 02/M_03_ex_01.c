#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char s1[] = "akKkk1";
    char s2[] = "akKkk2";

    int result = ft_strncmp(&s1, &s2, 5);

    return 0;
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;

    while (i < n)
    {
        if ((s1[i] > s2[i]) || (s1[i] && !(s2[i])))
            return 1;
        else if ((s2[i] > s1[i]) || (s2[i] && !(s1[i])))
            return -1;
        i++;
    }

    return 0;
}



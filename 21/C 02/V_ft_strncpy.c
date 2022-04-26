char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char dest[] = "worldgsjsgkstykhktyk";
    char src[] = "aler";

    ft_strncpy(dest, src, 10);

    return 0;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0; // рекомендуют size_t, нужно почитать почему

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
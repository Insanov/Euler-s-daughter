char *ft_strlowcase(char *str);

int main(void)
{
    char str[] = "hello 123 world";
    char *result = ft_strlowcase(str);

    return 0;
}

char *ft_strlowcase(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';

        i++;
    }

    return str;
}
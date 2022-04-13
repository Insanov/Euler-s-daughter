char *ft_strupcase(char *str);

int main(void)
{
    char str[] = "hello 123 world";
    char *result = ft_strupcase(str);

    return 0;
}

char *ft_strupcase(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';

        i++;
    }

    return str;
}
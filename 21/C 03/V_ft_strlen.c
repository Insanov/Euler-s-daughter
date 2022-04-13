int ft_strlen(char *str);

int main(void)
{
    char str[] = "Some random lorem blah blah hello there my name is Mark";

    int strlength = ft_strlen(str);

    return 0;
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i++])
        ;

    return i;
}
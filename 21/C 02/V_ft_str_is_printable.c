int ft_str_is_printable(char *str);

int main(void)
{
    int result = ft_str_is_printable("sdlhA");

    return 0;
}

int ft_str_is_printable(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return 0;

        i++;
    }

    return 1;
}
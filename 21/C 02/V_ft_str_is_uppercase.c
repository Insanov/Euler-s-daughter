int ft_str_is_uppercase(char *str);

int main(void)
{
    int result = ft_str_is_uppercase("sdlhA");

    return 0;
}

int ft_str_is_uppercase(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;

        i++;
    }

    return 1;
}
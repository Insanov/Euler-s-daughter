int ft_str_is_lowercase(char *str);

int main(void)
{
    int result = ft_str_is_lowercase("sdlhA");

    return 0;
}

int ft_str_is_lowercase(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;

        i++;
    }

    return 1;
}
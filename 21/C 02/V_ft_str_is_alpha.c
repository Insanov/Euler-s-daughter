int ft_str_is_alpha(char *str);

int main(void)
{
    int result = ft_str_is_alpha("uga\0buga");

    return 0;
}

int ft_str_is_alpha(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z'))
            return 0;

        i++;
    }

    return 1;
}
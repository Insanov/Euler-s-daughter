int ft_str_is_numeric(char *str);

int main(void)
{
    int result = ft_str_is_numeric("007b");

    return 0;
}

int ft_str_is_numeric(char *str)
{
    unsigned int i = 0;

    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;

        i++;
    }

    return 1;
}
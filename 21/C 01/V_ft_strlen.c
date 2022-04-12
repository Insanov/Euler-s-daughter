int ft_strlen(char *str);

int main(void)
{
    int result = ft_strlen("Hello world");

    return 0;
}

int ft_strlen(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}
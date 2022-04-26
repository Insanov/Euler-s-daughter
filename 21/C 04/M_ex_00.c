int ft_strlen(char *str);

int main()
{
    char str[] = "Heil Hitler";
    int result = ft_strlen(str);
    
    return 0;
}

int ft_strlen(char *str)
{
    int count = 0;

    while(str[count])
        count++;

    return count;
}
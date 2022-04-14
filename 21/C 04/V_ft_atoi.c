int ft_atoi(char *str);

int main(void)
{
    char str[] = " --+---+1234ab567";

    int number = ft_atoi(str);

    return 0;
}

int ft_atoi(char *str)
{
    unsigned int i = 0;
    int minusCount = 0;
    int result = 0;

    while (str[i] == '+' || str[i] == '-' || str[i] == ' ') // теоретически сюда входят и табуляции и прочее, их не рассматривал
    {
        if (str[i++] == '-')
            minusCount++;
    }

    while (str[i] > '0' && str[i] < '9')
    {
        result *= 10;
        result += (int)str[i++] - '0';
    }

    return minusCount % 2 ? -result : result;
}

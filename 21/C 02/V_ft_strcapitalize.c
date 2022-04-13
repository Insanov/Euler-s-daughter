char *ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);

    return 0;
}

char *ft_strcapitalize(char *str)
{
    unsigned int i = 0;
    int capitalizeNext = 1;

    while (str[i])
    {
        if (capitalizeNext)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 'a' + 'A';
                capitalizeNext = 0;
            }

            if (str[i] >= '0' && str[i] <= '9')
                capitalizeNext = 0;
        }
        else
        {
            if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')))
                capitalizeNext = 1;
        }

        i++;
    }

    return str;
}
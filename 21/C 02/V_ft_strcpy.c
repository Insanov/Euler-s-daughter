char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char first[] = "hello world";
    char second[] = "world";
    char *firstP = first;
    char *secondP = second;

    ft_strcpy(firstP, secondP);

    return 0;
}

char *ft_strcpy(char *dest, char *src)
{
    int index = 0;

    while (*(src + index) != '\0')
    {
        *(dest + index) = *(src + index);
        index++;
    }

    *(dest + index) = *(src + index); // placing null pointer

    return dest;
}
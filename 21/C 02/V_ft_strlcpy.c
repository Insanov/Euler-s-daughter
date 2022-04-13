unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    return 0;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    size--; // не понимаю зачем, но man не особо помогает в понимании

    while (i < size && src[i])
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return i;
}
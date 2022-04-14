int ft_sqrt(int nb);

int main(void)
{
    int sqrt = ft_sqrt(17);

    return 0;
}

int ft_sqrt(int nb)
{
    int currNumber = 1;

    while (currNumber * currNumber < nb)
        currNumber++;

    if (currNumber * currNumber == nb)
        return currNumber;

    return 0;
}
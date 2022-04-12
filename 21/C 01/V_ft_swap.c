void ft_swap(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 420;

    ft_swap(&a, &b);

    return 0;
}

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
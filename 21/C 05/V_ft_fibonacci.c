int ft_fibonacci(int index);

int main(void)
{
    int fibonacciResult = ft_fibonacci(10);

    return 0;
}

int ft_fibonacci(int index)
{
    if (index == 1 || index == 2)
        return index - 1;

    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
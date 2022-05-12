int digital_root(int n);

int main()
{
    int result = digital_root(1254);
    return 0;
}

int digital_root(int n)
{
    int result = 0;

    while (n)
    {
        result += n % 10;
        n /= 10;
    }
    if (result / 10 == 0)
        return result;
    return digital_root(result);
}
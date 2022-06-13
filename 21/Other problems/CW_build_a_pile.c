int main()
{

    return 0;
}

long long findNb(long long m)
{
    long long sum = 0, n = 1;
    while (sum < m)
    {
        sum += n * n * n;
        n++;
    }
    return (sum == m) ? n - 1 : -1;
}
unsigned long long square_digits(unsigned n);
long long power(int base, int degree);

int main()
{
    square_digits(1234678);
    return 0;
}

unsigned long long square_digits(unsigned n)
{
    int arr[17], rem, i = 0, count = 0;
    unsigned long long result = 0;
    while (n)
    {
        rem = n % 10;
        if (rem > 3)
        {
            arr[i++] = power(rem, 2) % 10;
            arr[i++] = power(rem, 2) / 10;
        }
        else
            arr[i++] = power(rem, 2);
        n /= 10;
    }

    for (int j = i - 1; j > -1; j--)
    {
        result += arr[j] * power(10, j);
    }

    return result;
}

long long power(int base, int degree)
{
    long long result = 1;
    for (int i = 0; i < degree; i++)
        result *= base;

    return result;
}
int get_sum(int a, int b);

int main()
{

    return 0;
}

int get_sum(int a, int b)
{
    if (a == b)
        return a;

    int result = 0;
    if (b > a)
        for (int i = a; i < b + 1; i++)
            result += i;
    else
        for (int i = b; i < a + 1; i++)
            result += i;

    return result;
}
int solution(int number);

int main()
{

    solution(9);

    return 0;
}

int solution(int number)
{

    int sum = 0;

    for (int i = 0; i < number + 1; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
            continue;
        }
    }

    return sum;
}
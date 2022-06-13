#include <stdlib.h>

long long *gap(int g, long long m, long long n);
int is_prime(int number);

int main()
{
    gap(4, 100, 110);
    return 0;
}

long long *gap(int g, long long m, long long n)
{
    long long *array = calloc((n + 1), sizeof(long long));
    long long *result = malloc(2 * sizeof(long long));

    for (int i = 0; i < 2; i++)
        *(array + i) = 0;

    for (int i = 2; i < n + 1; i++)
        if (array[i])
            for (int j = 2 * i; j < n + 1; j += i)
                array[j] = 1;

    for (int i = m; i < n + 1; i++)
        if (array[i] == 0 && array[i + g] == 0)
            for (int j = i + 1; j < i + g; i++)
            {
                if (array[j] == 0)
                    break;
                if (j == i + g - 1 && array[j] != 0)
                {
                    *result = i;
                    *(result + 1) = i + g;
                    return result;
                }
            }
}

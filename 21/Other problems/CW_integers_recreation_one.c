#include <math.h>
#include <stdlib.h>

typedef struct Pair Pair;
struct Pair
{
    long long first;
    long long snd;
};

Pair **listSquared(long long m, long long n, int *length);

int main()
{
    int *length;
    listSquared(1, 250, length);

    return 0;
}

Pair **listSquared(long long m, long long n, int *length)
{
    long long sum = 0, i, k = 0;
    int count = 0;

    Pair **result = malloc(sizeof(Pair *) * (n - m + 1));
    for (i = m; i < n + 1; i++)
    {
        for (long long j = 1; j < sqrt(i); j++)
        {
            if (i % j == 0)
            {
                sum += pow(j, 2);

                if (j < sqrt(i))
                    sum += pow(i / j, 2);
            }
        }
        long long tmp = (long long)sqrt(sum);
        if (pow(tmp, 2) == sum)
        {
            result[k] = (Pair *)malloc(sizeof(Pair));
            result[k]->first = i;
            result[k]->snd = sum;
            k++;
            count++;
        }
    }
    length = &count;

    return result;
}
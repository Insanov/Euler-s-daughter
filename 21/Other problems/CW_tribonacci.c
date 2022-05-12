#include <stdlib.h>
long long *tribonacci(const long long signature[3], size_t n);

int main()
{
    long long signature[3] = {1, 1, 1};
    tribonacci(signature, 10);

    return 0;
}

long long *tribonacci(const long long signature[3], size_t n)
{
    if (0 == n) return NULL;
    long long *result = malloc(n * sizeof(long long));
    for (int j = 0; j < 3; j++)
        result[j] = signature[j];

    for (int i = 3; i < n; i++)
        result[i] = result[i - 1] + result[i - 2] + result[i - 3];

    return result;
}
#include <stddef.h>
#include <math.h>

double mean_square_error(size_t n, const int a[n], const int b[n])
{
    double result = 0;
    double diff = 0, sum = 0;

    for (int i = 0; i < n; i++)
        sum = pow(fabs(a[i] - b[i]), 2);

    result = sum / n;

    return result;
}
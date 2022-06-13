#include <stdlib.h>

struct interval
{
    int first;
    int second;
};
int sum_intervals(const struct interval *v, size_t n);
int *realloc_and_fill(int *array, int start, int stop);
int is_digit_in(int *array, int digit);

int main(void)
{
    struct interval interval_list[] = {{1, 5}, {10, 20}, {1, 6}, {16, 19}, {5, 11}};
    size_t n = 5;
    sum_intervals(interval_list, n);

    return 0;
}

int sum_intervals(const struct interval *v, size_t n)
{
    int length = v[0].second - v[0].first;
    int *array = calloc(length, sizeof(int));
    for (int j = v[1].first; j < v[1].second; j++)
        array[j - v[1].first] = j;

    for (int i = 1; i < (int)n; i++)
    {
        if (is_digit_in(array, v[i].first))
            if (!(is_digit_in(array, v[i].second)))
                realloc_and_fill(array, array[0], v[i].second);
            else if (is_digit_in(array, v[i].second))
                if (!(is_digit_in(array, v[i].first)))
                    realloc_and_fill(array, v[i].first, array[sizeof(array) / sizeof(int) - 1]);
                else
                {
                    length = sizeof(array) / sizeof(int) + v[i].second - v[i].first;
                    int start = array[0];
                    int stop = array[sizeof(array) / sizeof(int) - 1];
                    if (start > v[i].second)
                    {
                        array = realloc(array, length);
                        for (int j = v[i].first; j < v[i].second; j++)
                            array[j - v[i].first] = j;
                        for (int j = start; j < stop; j++)
                            array[v[i].second - v[i].first] = j;
                    }
                }
    }
    int result = sizeof(array) / sizeof(int);

    return result;
}

int *realloc_and_fill(int *array, int start, int stop)
{
    int *new_array = (int *)realloc(array, stop - start);

    for (int i = start; i < stop; i++)
        array[i - start] = i;

    return new_array;
}

int is_digit_in(int *array, int digit)
{
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; i++)
        if (array[i] == digit)
            return 1;

    return 0;
}
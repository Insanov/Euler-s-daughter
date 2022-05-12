#include <stddef.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n]);

int main()
{
    int nums[] = {3, 87, 45, 12, 7};
    size_t n = sizeof(nums) / sizeof(int);
    long result = sum_two_smallest_numbers(n, nums);

    return 0;
}

long sum_two_smallest_numbers(size_t n, const int numbers[n])
{
    unsigned int first_min = 4294967295, second_min = 4294967295;
    long result = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] <= first_min)
        {
            second_min = first_min;
            first_min = numbers[i];
        }
        else if (numbers[i] < second_min)
            second_min = numbers[i];
    }
    result = first_min + second_min;

    return result;
}
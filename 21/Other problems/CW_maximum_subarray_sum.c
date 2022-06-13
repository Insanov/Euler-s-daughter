#include <stddef.h>
int maxSequence(const int* array, size_t n);

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSequence(arr, 9);
    return 0;
}

int maxSequence(const int* array, size_t n) 
{
    int sum = 0, max_sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += array[i];
        if (sum < 0)
            sum = 0;
        else if (sum > max_sum)
            max_sum = sum;
    }

    return max_sum;
}
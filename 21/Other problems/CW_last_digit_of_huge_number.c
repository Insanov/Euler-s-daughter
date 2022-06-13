#include <stdlib.h>

int last_digit(const unsigned long int *arr, size_t arr_size);

int main(void)
{
    const unsigned long arr2[] = {3, 4, 2};
    last_digit(arr2, 3);

    return 0;
}

int last_digit(const unsigned long int *arr, size_t arr_size)
{
    int array_1[] = {1, 1, 1, 1};
    int array_2[] = {2, 4, 8, 6};
    int array_3[] = {3, 9, 7, 1};
    int array_4[] = {4, 6, 4, 6};
    int array_5[] = {5, 5, 5, 5};
    int array_6[] = {6, 6, 6, 6};
    int array_7[] = {7, 9, 3, 1};
    int array_8[] = {8, 4, 2, 6};
    int array_9[] = {9, 1, 9, 1};

    unsigned long int copy_arr[arr_size];
    for (int j = 0; j < arr_size; j++)
        copy_arr[j] = arr[j];

    for (int i = arr_size - 2; i > -1; i--)
    {
        int tmp = arr[i + 1] % 4 - 1;
        if (arr[i] == 1)
            copy_arr[i] = array_1[tmp];
        else if (arr[i] == 2)
            copy_arr[i] = array_2[tmp];
        else if (arr[i] == 3)
            copy_arr[i] = array_3[tmp];
        else if (arr[i] == 4)
            copy_arr[i] = array_4[tmp];
        else if (arr[i] == 5)
            copy_arr[i] = array_5[tmp];
        else if (arr[i] == 6)
            copy_arr[i] = array_6[tmp];
        else if (arr[i] == 7)
            copy_arr[i] = array_7[tmp];
        else if (arr[i] == 8)
            copy_arr[i] = array_8[tmp];
        else if (arr[i] == 9)
            copy_arr[i] = array_9[tmp];
    }

    unsigned long int result = copy_arr[0];

    return result;
}
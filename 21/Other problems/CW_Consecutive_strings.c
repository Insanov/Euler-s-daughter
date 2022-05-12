#include <stdlib.h>
#include <string.h>

char *longestConsec(const char *const strings[], int arr_len, int k);
int *quickSort(int *arr, int first, int last);
int check_length(const char *str);
int first_digit(int number);

int main()
{
    const char *strarr[] = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
    longestConsec(strarr, 3, 2);
    return 0;
}

char *longestConsec(const char *const strings[], int arr_len, int k)
{
    if (0 == arr_len || k > arr_len || k <= 0)
        return NULL;
    int sum = 0, j = 0;

    int *arr = (int *)(malloc(sizeof(int) * arr_len));
    for (; j < arr_len; j++)
        *(arr + j) = 100 * check_length(strings[j]) + (arr_len - j);

    quickSort(arr, 0, arr_len - 1);

    for (j = 0; j < k; j++)
        sum += first_digit(arr[j]);

    char *result = malloc((sum + 1) * sizeof(char));
    int tmp = 0;
    for (j = arr_len - 1; j > arr_len - 1 - k; j--)
    {
        int i = arr_len - arr[j] % 100;
        if (j == arr_len - 1)
            strcpy(result, strings[i]);
        else if (strcmp(strings[i], strings[tmp]))
            strcat(result, strings[i]);
        tmp = i;
    }
    return result;
}

int *quickSort(int *arr, int first, int last)
{
    if (first < last)
    {
        int left = first;
        int right = last;
        int middle = arr[(first + last) / 2];

        while (left < right)
        {
            while (arr[left] < middle)
                left++;
            while (arr[right] > middle)
                right--;
            if (left <= right)
            {
                int tmp = arr[left];
                arr[left++] = arr[right];
                arr[right--] = tmp;
            }
        }
        quickSort(arr, first, right);
        quickSort(arr, left, last);
    }

    return arr;
}

int check_length(const char *str)
{
    int result = 0, i = 0;
    while (str[i++])
        result++;

    return result;
}

int first_digit(int number)
{
    int result = number / 100;

    return result;
}

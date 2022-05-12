void quickSort(int *arr, int first, int last)
{
    if (first < last)
    {
        int left = first;
        int right = last;
        int middle = arr[(first + last) / 2];

        while(left < right)
        {
            while(arr[left] < middle)
                left++;
            while(arr[right] > middle)
                right--;
            if(left <= right)
            {
                int tmp = arr[left];
                arr[left++] = arr[right];
                arr[right--] = tmp;
            }
        }
        quickSort(arr, first, right);
        quickSort(arr, left, last);
    }
}
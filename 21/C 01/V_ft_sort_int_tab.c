void ft_sort_int_tab(int *tab, int size);
void quicksort(int *a, int low, int high);
int split(int *a, int low, int high);

int main(void)
{
    int arr[] = {5, 7, 1, 8, 3, 2, 9};
    ft_sort_int_tab(arr, 7);

    return 0;
}

void ft_sort_int_tab(int *tab, int size)
{
    quicksort(tab, 0, size - 1);
}

void quicksort(int *a, int low, int high)
{
    if (low >= high)
        return;

    int middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int *a, int low, int high)
{
    int temp = *(a + low);

    while (1)
    {
        while (high > low && temp <= *(a + high))
        {
            high--;
        }
        if (low >= high)
            break;
        *(a + low) = *(a + high);
        low++;

        while (high > low && temp >= *(a + low))
        {
            low++;
        }
        if (low >= high)
            break;
        *(a + high) = *(a + low);
        high--;
    }

    *(a + high) = temp;

    return high;
}
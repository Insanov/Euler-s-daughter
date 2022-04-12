void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    ft_rev_int_tab(arr, size);

    return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
    int indexPointer = 0;
    int temp;

    while (indexPointer < size - 1 - indexPointer)
    {
        temp = *(tab + indexPointer);
        *(tab + indexPointer) = *(tab + size - 1 - indexPointer);
        *(tab + size - 1 - indexPointer) = temp;
        indexPointer++;
    }
}
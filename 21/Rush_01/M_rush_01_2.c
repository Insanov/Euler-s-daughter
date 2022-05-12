#include <unistd.h>
#include <stdlib.h>

void skyscrapes(int c1u, int c2u, int c3u, int c4u, int c1d, int c2d, int c3d, int c4d, int r1l, int r2l, int r3l, int r4l, int r1r, int r2r, int r3r, int r4r);
int is_number_in(int *arr[], int number);
int amount_of_numbers(int *arr[]);

int main()
{
}

void skyscrapes(int c1u, int c2u, int c3u, int c4u, int c1d, int c2d, int c3d, int c4d, int r1l, int r2l, int r3l, int r4l, int r1r, int r2r, int r3r, int r4r)
{
    int **arr = malloc(6 * sizeof(int *));
    int row, col, k;
    for (row = 0; row < 6; row++)
        arr[row] = malloc(6 * sizeof(int));

    int data[] = {c1u, c2u, c3u, c4u, c1d, c2d, c3d, c4d, r1l, r2l, r3l, r4l, r1r, r2r, r3r, r4r};
    arr[row][col] = {0};

    for (k = 0; k < 15; k++)
    {
        if (k >= 0 && k <= 3)
            arr[0][k + 1] = data[k];
        else if (k >= 4 && k <= 7)
            arr[5][k - 3] = data[k];
        else if (k >= 8 && k <= 11)
            arr[k - 7][0] = data[k];
        else if (k >= 12 && k <= 15)
            arr[k - 11][5] = data[k];
    }

    for (k = 0; k < 16; k++)
    {
        if (data[k] == 1)
        {
            if (k >= 0 && k <= 3)
                arr[1][k + 1] = 4;
            else if (k >= 4 && k <= 7)
                arr[4][k - 3] = 4;
            else if (k >= 8 && k <= 11)
                arr[k - 7][1] = 4;
            else if (k >= 12 && k <= 15)
                arr[k - 11][4] = 4;
        }
        else if (data[k] == 4)
        {
            if (k >= 0 && k <= 3)
                arr[1][k + 1] = 1;
            else if (k >= 4 && k <= 7)
                arr[4][k - 3] = 1;
            else if (k >= 8 && k <= 11)
                arr[k - 7][1] = 1;
            else if (k >= 12 && k <= 15)
                arr[k - 11][4] = 1;
        }
    }
    for (row = 1; row < 5; row++)
    {
        if (arr[row][1] == 4)
            arr[row][4] = 3;
        else if (arr[row][4] = 4)
            arr[row][1] = 3;
    }
    for (col = 1; col < 5; col++)
    {
        if (arr[1][col] == 4)
            arr[4][col] = 3;
        else if (arr[4][col] = 4)
            arr[1][col] = 3;
    }
    for (row = 1; row < 5; row++)
    {
        if (amount_of_numbers(arr[row]) == 2)
        {
            if (arr[row][0] == 3)
            {
                arr[row][1] = 2;
                for (int i = 1; i < 5; i++)
                    if (!(arr[row][i]))
                        arr[row][i] = 1;
            }
            else if (arr[row][5] == 3)
            {
                arr[row][4] = 2;
                for (int i = 1; i < 5; i++)
                    if (!(arr[row][i]))
                        arr[row][i] = 1;
            }
        }
    }
    for (col = 1; col < 5; col++)
    {
        if (amount_of_numbers(arr[col]) == 2)
        {
            if (arr[0][col] == 3)
            {
                arr[1][col] = 2;
                for (int i = 1; i < 5; i++)
                    if (!(arr[i][col]))
                        arr[i][col] = 1;
            }
            else if (arr[5][col] == 3)
            {
                arr[4][col] = 2;
                for (int i = 1; i < 5; i++)
                    if (!(arr[i][col]))
                        arr[i][col] = 1;
            }
        }
    }
    for (row = 1; row < 5; row++)
    {
        if (amount_of_numbers(arr))
    }
}

int is_number_in(int *arr[], int number)
{
    for (int i = 1; i < 5; i++)
        if (arr[i] == number)
            return 1;
    return 0;
}

int amount_of_numbers(int *arr[])
{
    int count = 0;

    for (int i = 1; i < 5; i++)
        if (arr[i])
            count++;

    return count;
}
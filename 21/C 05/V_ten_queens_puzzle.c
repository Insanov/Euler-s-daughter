#include <unistd.h>

int ft_ten_queens_puzzle(void);
void placeQueenInColumn(int arr[], int column, int *result);

int main(void)
{
    int possibleCombinations = ft_ten_queens_puzzle();

    return 0;
}

int ft_ten_queens_puzzle(void)
{
    int arr[10] = {0};
    int result = 0;

    placeQueenInColumn(arr, 0, &result);

    return result;
}

void placeQueenInColumn(int arr[], int column, int *result)
{
    if (column == 10)
    { // didn't check if it's possible that there is no possible placeable position for queen, seems like it's covered anyways
        (*result)++;

        for (int i = 0; i < 10; i++)
        {
            char digit = arr[i] + '0';

            write(1, &digit, 1);
        }

        char newLine = '\n';
        write(1, &newLine, 1);

        return;
    }

    int availableCells[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    for (int i = 0; i < column; i++)
    {
        if (arr[i] + column - i < 10)
        {
            availableCells[arr[i] + column - i] = 0; // нельзя ставить на диагонали ниже
        }

        if (arr[i] - column + i >= 0)
        {
            availableCells[arr[i] - column + i] = 0; // нельзя ставишь на диагонали выше
        }

        availableCells[arr[i]] = 0; // нельзя ставить на том же ряду
    }

    for (int i = 0; i < 10; i++)
    {
        if (availableCells[i])
        {
            arr[column] = i;

            placeQueenInColumn(arr, column + 1, result);
        }
    }

    return;
}
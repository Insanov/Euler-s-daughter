#include <stddef.h>
#include <stdlib.h>

int score(const int dice[5]);

int main()
{
    int dice[5] = {1, 5, 2, 5, 3};
    score(dice);
    return 0;
}

int score(const int dice[5])
{
    int *digits = calloc(6, sizeof(int));


    for (int i = 0; i < 5; i++)
    {
        int j = dice[i] - 1;
        digits[j] += 1;
    }
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
        if(digits[i] > 2)
        {
            if(0 == i)
            {
                sum += 1000;
                continue;
            }
            sum += (i + 1) * 100;
            if(0 == i)
                sum += (digits[i] - 3) * 100;
            else if(4 == i)
                sum += (digits[i] - 3) * 50;
        }
        if(digits[i] == 1 || digits[i] == 2)
        {
            if(0 == i)
                sum += digits[i] * 100;
            else if(4 == i)
                sum += digits[i] * 50;
        }
    }

    return sum;
}
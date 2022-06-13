#include <stdlib.h>
#include <stddef.h>

char *highestScoringWord(const char *str);

int main()
{
    const char str[] = "what time are we climbing up the volcano";
    highestScoringWord(str);
    return 0;
}

char *highestScoringWord(const char *str)
{
    int sum = 0, max_sum = 0, index, i, word_length = 0, j;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == 32)
        {
            if (sum > max_sum)
            {
                max_sum = sum;
                sum = 0;
                index = i - 1;
            }
            sum = 0;
            continue;
        }
        sum += str[i];
    }
    if (sum > max_sum)
    {
        max_sum = sum;
        index = i - 1;
    }

    for (i = index; str[i] != 32 && i > -1; i--)
        word_length++;

    char *result = malloc((word_length + 1) * sizeof(char));
    i += 1;
    for (j = 0; i < index + 1; i++, j++)
        result[j] = str[i];

    result[j] = '\0';

    return result;
}
#include <stdlib.h>

char *order_words(char *ordered, const char *words);
int digit_search(char *word);

int main()
{
    char words[] = "4of Fo1r pe6ople g3ood th5e the2";
    char ordered[] = "\0";
    order_words(ordered, words);
    return 0;
}

char *order_words(char *ordered, const char *words)
{
    int i = 0, count = 0, max_length = 0, length = 0, k, j, total_length = 0;

    while (words[total_length++])
    {
        length++;
        if (words[total_length] == 32)
        {
            if (length > max_length)
                max_length = length;
            length = 0;
            count++;
        }
    }

    char *arr[count + 1];
    for (i = 0; i < count + 1; i++)
        arr[i] = malloc(max_length * sizeof(char));
    for (j = 0, i = 0, k = 0; words[i]; i++)
    {
        arr[k][j++] = words[i];
        if (words[i] == 32)
        {
            arr[k][j] = '\0';
            j = 0;
            k++;
        }
    }
    if (k == count)
        arr[k][j++] = ' ';
    arr[k][j] = '\0';
    int top;
    for (i = 1; i < k + 1; i++)
    {
        top = i;
        while (top > 0 && digit_search(arr[top - 1]) > digit_search(arr[top]))
        {
            char *tmp = arr[top];
            arr[top] = arr[top - 1];
            arr[top - 1] = tmp;
            top--;
        }
    }
    int index = 0;
    for (i = 0; i < k + 1; i++)
    {
        for (int j = 0; arr[i][j]; j++)
        {
            if (index == total_length - 1)
            {
                ordered[index] = '\0';
                return ordered;
            }
            ordered[index++] = arr[i][j];
        }
    }
}

int digit_search(char *word)
{
    int result;

    for (int i = 0; word[i]; i++)
        if (word[i] > 47 && word[i] < 58)
        {
            result = word[i] - 48;
            return result;
        }
}
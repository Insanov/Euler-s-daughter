#include <stdlib.h>

char **ft_split_whitespaces(char *str);
int getNumberOfWords(char *str);
char *getWordAddress(char *str, int startingIndex, int count);

int main(void)
{
    char **result = ft_split_whitespaces("Hello there ebanyi dolbaeb lol");

    return 0;
}

char **ft_split_whitespaces(char *str)
{
    int wordsNumber = getNumberOfWords(str);
    char **addressArray = malloc(sizeof(char *) * wordsNumber);

    int count = 0;
    int addressIndex = 0;
    for (int i = 0;; i++)
    {
        if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            count++;

        if (count && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        {
            addressArray[addressIndex++] = getWordAddress(str, i - count, count);
            count = 0;
        }

        if (count && str[i] == '\0')
        {
            addressArray[addressIndex] = getWordAddress(str, i - count, count);

            break;
        }
    }

    return addressArray;
}

int getNumberOfWords(char *str)
{
    int wordsNumber = 0, wordStarted = 0;

    for (int i = 0; str[i]; i++)
    {
        if (wordStarted && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        {
            wordStarted = 0;
            wordsNumber++;

            continue;
        }

        if (!wordStarted && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            wordStarted = 1;
    }

    return wordsNumber;
}

char *getWordAddress(char *str, int startingIndex, int count)
{
    char *wordAddress = malloc(count * sizeof(char) + 1);

    int j = 0;
    for (int i = startingIndex; i < startingIndex + count; i++, j++)
    {
        wordAddress[i] = str[i];
    }

    wordAddress[j] = '\0';

    return wordAddress;
}
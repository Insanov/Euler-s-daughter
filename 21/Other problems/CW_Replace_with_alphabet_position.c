#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char *alphabet_position(const char *text);

int main()
{
    char phrase[] = "a";
    alphabet_position(phrase);
    return 0;
}

char *alphabet_position(const char *text)
{
    int i = 0, count = 0;
    char [] = "";
    while (text[i])
    {
        char letter = tolower(text[i]);
        if (letter > 96 && letter < 123)
        {
            if (letter - 96 > 9)
                count += 3;
            else
                count += 2;
        }
        i++;
    }
    if (0 == count)

    char *result = malloc(sizeof(char) * count);
    int j = 0;
    for (int i = 0; text[i]; i++)
    {
        char letter = tolower(text[i]);
        if (letter > 96 && letter < 123)
        {
            if (letter - 96 > 9)
            {
                result[j++] = (letter - 96) / 10 + 48;
                result[j++] = (letter - 96) % 10 + 48;
            }
            else
                result[j++] = letter - 96 + 48;
            result[j++] = ' ';
        }
    }
    result[--j] = '\0';

    return result;
}
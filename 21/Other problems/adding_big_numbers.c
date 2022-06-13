#include <stdlib.h>
#include <string.h>

char *add(const char *a, const char *b);
char *adding(char *result, const char *a, const char *b, int length);

int main(void)
{
    char a[] = "999999999";
    char b[] = "1";
    add(a, b);

    return 0;
}

char *add(const char *a, const char *b)
{
    char *result; //так делать нельзя
    if (strlen(b) > strlen(a))
    {
        for (unsigned long j = 0; j < strlen(b) - strlen(a); j++)
        {
            if (b[j] != 9 + 48)
            {
                result = calloc(strlen(b), sizeof(char));
                adding(result, a, b, strlen(b));
                return result;
            }
        }
        result = calloc(strlen(b) + 1, sizeof(char));
        adding(result, a, b, strlen(b) + 1);
        return result;
    }
    else if (strlen(a) > strlen(b))
    {
        for (unsigned long j = 0; j < strlen(a) - strlen(b); j++)
        {
            if (a[j] != 9 + 48)
            {
                result = calloc(strlen(a), sizeof(char));
                adding(result, b, a, strlen(a));
                return result;
            }
        }
        result = calloc(strlen(a) + 1, sizeof(char));
        adding(result, b, a, strlen(a) + 1);
        return result;
    }
    else
    {
        for (unsigned long j = 0; j < strlen(a); j++)
        {
            if (a[j] + b[j] > 9 + 96)
            {
                result = calloc(strlen(a) + 1, sizeof(char));
                adding(result, b, a, strlen(a) + 1);
                return result;
            }
            else if (a[j] + b[j] < 9 + 96)
            {
                result = calloc(strlen(a), sizeof(char));
                adding(result, b, a, strlen(a));
                return result;
            }
        }
        result = calloc(strlen(a), sizeof(char));
        adding(result, b, a, strlen(a));
        return result;
    }
}

char *adding(char *result, const char *a, const char *b, int length)
{
    int i = 0, i_a = strlen(a) - 1, i_b = strlen(b) - 1, flag = 0;
    result[length--] = '\0';
    while (a[i])
    {
        int tmp = a[i_a--] - 48 + b[i_b--] - 48 + flag;
        if (tmp > 9)
        {
            flag = 1;
            result[length--] = tmp - 10 + 48;
        }
        else
        {
            flag = 0;
            result[length--] = tmp + 48;
        }
        i++;
    }
    while (i_b > -1)
    {
        if (flag == 1)
        {
            if (b[length] != (9 + 48))
            {
                result[length--] = b[i_b--] + 1;
                flag = 0;
            }
            else
            {
                result[length--] = 48;
                i_b--;
            }
        }
        else
            result[length--] = b[i_b--];
    }
    if (flag == 1)
        result[0] = 49;
    return result;
}
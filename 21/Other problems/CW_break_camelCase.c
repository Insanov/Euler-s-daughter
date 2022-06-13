#include <stddef.h>
#include <stdlib.h>

char *solution(const char *camelCase);

int main()
{
    const char str[] = "camelCase";
    solution(str);

    return 0;
}

char* solution(const char *camelCase) {
    int count = 0;
    int length = 0;
    while (camelCase[length++])
        ;
    for (int i = 0; camelCase[i]; i++)
        if (camelCase[i] > 64 && camelCase[i] < 91)
            count++;

    char *result = malloc((length + count + 1) * sizeof(char));

    int j = 0;
    for (int i = 0; camelCase[i]; i++)
    {
        result[j++] = camelCase[i];
        if (camelCase[i + 1] > 64 && camelCase[i + 1] < 91)
            result[j++] = 32;
    }
    result[j] = '\0';
    return result;
}
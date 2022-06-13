#include <stdbool.h>
bool xo (const char* str);

int main()
{
    char arr[] = "oxooxox";
    
    return 0;
}

bool xo (const char* str)
{
    int count_x = 0, count_o = 0;

    for(int i = 0; str[i]; i++)
    {
        if (str[i] == 'x')          count_x++;
        else if (str[i] == 'o')     count_o++;
    }
    if (count_o == count_x) 
        return true;

    return false;
}
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str);
int degree(int i);

int main()
{
    char str[] = " ---+--+123443ab567";
    int result = ft_atoi(str);

    printf("%d", result);

    return 0;
}

int ft_atoi(char *str)
{
    int i = 0, count = 0;
    
    while(str[i] < '0' || str[i] > '9')
    {
        if (str[i] == '-')
            count ++;
        i++;
    }

    int j = 0, last_index, new_count = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        new_count++;
        i++;
    }
    
    last_index = i;
    i -= new_count;
    char number[new_count + 1];

    for(; i < last_index; i++)
    {
        number[j] = str[i];
        j++;
    }
    int result;

    int dg = new_count;
    for(i = 0; i < new_count; i++)
    {
        result += (number[i] - 48) * degree(dg - 1);
        dg--; 
    }

    return (count % 2 == 1) ? -(result) : result;
}

int degree(int i)
{
    int result = 1;
    for(int j = 0; j < i; j++)
        result *= 10;

    return result;
}
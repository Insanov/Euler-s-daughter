#include <stdio.h>

void ft_ft(int *a)
{
    *a = 42;
}

int main()
{
    int number = 50;
    int *a = &number;
    
    ft_ft(&number);
    printf("%d", number);
    return 0;
}

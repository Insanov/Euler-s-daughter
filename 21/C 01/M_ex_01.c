#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int number = 50;
    int *namber = &number;
    int **nomber = &namber;
    int ***nember = &nomber;
    int ****nimber = &nember;
    int *****nymber = &nimber;
    int ******mumber = &nymber;
    int *******pumber = &mumber;
    int ********kumber = &pumber;
    int *********tumber = &kumber;
    
    ft_ultimate_ft(&kumber);
    printf("%d", number);

    return 0;
}
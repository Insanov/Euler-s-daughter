void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int test = 100;
    int *test1 = &test;
    int **test2 = &test1;
    int ***test3 = &test2;
    int ****test4 = &test3;
    int *****test5 = &test4;
    int ******test6 = &test5;
    int *******test7 = &test6;
    int ********test8 = &test7;
    int *********test9 = &test8;

    ft_ultimate_ft(test9);

    return 0;
}

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
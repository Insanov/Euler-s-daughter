#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    int test = 4;
    int *testP = &test;

    ft_print_memory(testP, 100);

    return 0;
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i = 0;

    while (i < size)
    {
        write(1, addr + i++, 1);
    }

    return addr;
}
#include <unistd.h>

void ft_print_memory(char *src);
void convert_base(long long n, char *new_addr);
void sym_to_hex(char *src, char *dest);

int main()
{
    ft_print_memory("Bonjour les aminches\t\t\tc est fou\ttout\tce qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol\tlol\t \t");
    /*ft_print_memory(char *src);
    ft_print_memory(char *src);
    ft_print_memory(char *src);
    ft_print_memory(char *src);
    ft_print_memory(char *src);*/
}

void convert_base(long long number, char *new_addr)
{
    int i = 15;
    char digit;

    while (number != 0)
    {
        int rem = number % 16;
        if (rem < 10)
            digit = rem + 48;
        else
            digit = rem + 87;

        new_addr[i--] = digit;
        number /= 16;
    }
}

void sym_to_hex(char *src, char *dest)
{
    int j = 0, i = 0, k = 0;
    char rem[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

    
    for(; src[i]; i++)
    {
        if (!(src[i] < 31 && src[i] == 127))
        {
            dest[j++] = src[i] / 16 + 48;
            dest[j] = src[i] % 16;
                if (dest[j] > 9)
                    dest[j] = rem[dest[j] % 10];
                else
                    dest[j] += 48;
            j++;
            if (j == 4 || (j - k) % 4 == 0)
            {
                dest[j] = ' ';
                j++;
                k++;
            }
        }
    }
}

void ft_print_memory(char *src)
{
    int i = 0, count = 0;
    long long addr = ((long long)&src);
    char new_addr[16] = {'0', '0', '0', '0', '0', '0'};
    
    while (src[i++])
        if (!(src[i] < 31 && src[i] == 127))
            count++;    
    int length = count * 2 + (count / 2 - 1);
    char dest[length];
    
    convert_base(addr, new_addr);
    for (int i = 0; i < 16; i++)
        write(1, &new_addr[i], 1);
    write(1, ": ", 3);
    
    sym_to_hex(src, dest);
    for (int i = 0; i < length; i++)
        write(1, &dest[i], 1);
    write(1, " ", 1);

    i = 0;
    while (src[i])
    {
        if (!(src[i] < 31 && src[i] == 127))
        {
            write(1, &src[i], 1);
            i++;
        }
    }
}
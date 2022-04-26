#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size);
int convertToHex(unsigned long long number, char *dest);
int printMemory(unsigned long long address);
void padWithZeroes(char *hexAddress, int finalLength);

int main(void)
{
    char str[] = "Bonjour les aminches\t\t\tc est fou\ttout\tce qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol\tlol\t \t";

    ft_print_memory(str, 100);

    return 0;
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned long long decimalAddr = (unsigned long long)addr;
    int shouldContinue = 1;
    char hexAddress[17];

    while (shouldContinue)
    {
        int msdIndex = convertToHex(decimalAddr, hexAddress);
        padWithZeroes(hexAddress, 16);

        while (~msdIndex)
        {
            write(1, hexAddress + msdIndex--, 1);
        }
        write(1, ": ", 2);

        shouldContinue = printMemory(decimalAddr);

        decimalAddr += 16;
    }
}

int convertToHex(unsigned long long number, char *dest)
{
    int currDigitIndex = 0;

    while (number)
    {
        dest[currDigitIndex++] = number % 16 >= 10 ? (number % 16) % 10 + 'a' : number % 16 + '0';
        number /= 16;
    }

    dest[currDigitIndex] = '\0';

    return currDigitIndex - 1;
}

int printMemory(unsigned long long address)
{
    char currChar, hexValue[2];
    int shouldAddSpace = 0;
    char memString[17];

    for (int i = 0; i < 16 && *(char *)address; i++)
    {
        currChar = *(char *)address;
        memString[i] = currChar;
        int hexLength = convertToHex(currChar, hexValue);
        padWithZeroes(hexValue, 2);

        for (int j = 1; ~j; j--)
            write(1, hexValue + j, 1);

        shouldAddSpace++;

        if (shouldAddSpace == 2)
        {
            shouldAddSpace = 0;
            write(1, " ", 1);
        }

        address++;
    }

    int i = 0;
    while (memString[i])
    {
        if (memString[i] <= 31 || memString[i] >= 127)
        {
            write(1, ".", 1);
            i++;
        }
        else
        {
            write(1, memString + i++, 1);
        }
    }

    write(1, "\n", 1);

    return *(char *)address ? 1 : 0;
}

void padWithZeroes(char *address, int finalLength)
{
    int length = 0;

    while (address[length++])
        ;

    for (int i = 0; i <= finalLength - length; i++)
        write(1, "0", 1);
}
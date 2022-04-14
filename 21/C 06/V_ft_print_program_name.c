#include <unistd.h>

int main(int argc, char *argv[])
{
    unsigned int i = 0;

    while (argv[0][i])
    {
        write(1, &argv[0][i++], 1);
    }

    return 0;
}
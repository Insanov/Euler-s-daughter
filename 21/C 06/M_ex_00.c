#include <unistd.h>

int main(int argc, char *argv[])
{
    for(int i = 0; argv[0][i]; i++)
        write(1, &argv[0][i], 1); 
    
    return 0;
}
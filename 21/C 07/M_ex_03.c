#include <stdlib.h>
#include <unistd.h>

char *ft_concat_params(int argc, char **argv);

int main(int argc, char *argv)
{
    ft_concat_params(argc, &argv);
    
    return 0;
}

char *ft_concat_params(int argc, char **argv)
{
    int i = 0, count = 0;
    for(; i < argc; i++)
    {
        for(int j = 0; argv[i][j]; j++)
            count++;

    }
    char *string = malloc((count + argc - 1) * sizeof(char));
    int k = 0;

    for(i = 0; i < argc; i++)
    {
        for(int j = 0; argv[i][j]; j++)
            string[k++] = argv[i][j];
        if (i < argc - 1)
            string[k++] = '\n';
    }

    return string;
}
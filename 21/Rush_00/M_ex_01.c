#include <unistd.h>

void rush(int x, int y);

int main()
{
    rush(6, 5);
    
    return 0;
}

void rush(int x, int y)
{
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            if (0 == i)
            {
                if (0 == j)
                    write(1, "/", 1);
                else if (j == x - 1)
                    write(1, "\\", 1);
                else
                    write(1, "*", 1);
            }
            else if (i == y - 1)
            {
                if (0 == j)
                    write(1, "\\", 1);
                else if (j == x - 1)
                    write(1, "/", 1);
                else
                    write(1, "*", 1);
            }
            else 
            {
                if (0 == j || j == x - 1)
                    write(1, "*", 1);
                else
                    write(1, " ", 1);
            }
        }
        write(1, "\n", 1);
    }
}
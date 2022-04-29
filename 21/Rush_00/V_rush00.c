#include <unistd.h>

int rush(int x, int y);
enum Cell_Type getCellType(int xLimit, int yLimit, int x, int y);

enum Cell_Type
{
    INSIDE = ' ',
    VERTICAL_BORDER = '|',
    HORIZONTAL_BORDER = '-',
    EDGE = 'o'
};

int main(void)
{
    rush(1, 1);

    return 0;
}

int rush(int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            enum Cell_Type cellType = getCellType(x - 1, y - 1, j, i);
            write(1, &cellType, 1);
        }

        write(1, "\n", 1);
    }
}

enum Cell_Type getCellType(int xLimit, int yLimit, int x, int y)
{
    if (y == 0 || y == yLimit || x == 0 || x == xLimit)
    {
        if ((y == 0 || y == yLimit) && (x == 0 || x == xLimit))
            return EDGE;

        if (x == 0 || x == xLimit)
            return VERTICAL_BORDER;

        if (y == 0 || y == yLimit)
            return HORIZONTAL_BORDER;
    }

    return INSIDE;
}

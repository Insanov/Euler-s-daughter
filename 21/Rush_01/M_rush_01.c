#include <unistd.h>
#include <stdlib.h>

void skyscrapes (int c1u, int c2u, int c3u, int c4u, int c1d, int c2d, int c3d, int c4d, int r1l, int r2l, int r3l, int r4l, int r1r, int r2r, int r3r, int r4r);

int main()
{

}

void skyscrapes (int c1u, int c2u, int c3u, int c4u, int c1d, int c2d, int c3d, int c4d, int r1l, int r2l, int r3l, int r4l, int r1r, int r2r, int r3r, int r4r)
{
    int **arr = malloc( * sizeof(int *));
    int row, col, k;
    for(row = 0; row < 4; row++)
        arr[row] = malloc(4 * sizeof(int));
    
    int data[] = {c1u, c2u, c3u, c4u, c1d, c2d, c3d, c4d, r1l, r2l, r3l, r4l, r1r, r2r, r3r, r4r};
    
    for(k = 0; k < 16; k++)
    {
        if (data[k] == 1)
        {
            if (k >= 0 && k <= 3)            arr[0][k] = 4;
            else if (k >= 4 && k <= 7)      arr[3][k - 4] = 4;
            else if (k >= 8 && k <= 11)     arr[k - 8][0] = 4;
            else if (k >= 12 && k <= 15)    arr[k - 12][3] = 4;
        }
        else if (data[k] == 4)
        {
            if (k >= 0 && k <= 3)            arr[0][k] = 1;
            else if (k >= 4 && k <= 7)      arr[3][k - 4] = 1;
            else if (k >= 8 && k <= 11)     arr[k - 8][0] = 1;
            else if (k >= 12 && k <= 15)    arr[k - 12][3] = 1;
        }
    }

    for(int bypass = 1; bypass < 5; bypass++)
    {
        for(k = 0; k < 4; k++)
        {
            if (data[k * bypass] == 4)
        }
    }
}
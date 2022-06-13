#include <math.h>

int beeramid(double bonus, double price);

int main()
{
    beeramid(1500, 2);
    return 0;
}

int beeramid(double bonus, double price)
{
    if (bonus <= 0)
        return 0;
    int pintas = bonus / price + 1;
    int result = 0, i = 1;

    while (result < pintas)
    {
        result += pow(i, 2);
        i++;
    }

    return i - 2;
}
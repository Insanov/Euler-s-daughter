int rgb(int r, int g, int b, char *output);
int convert_to_hex(int r, int index, char *output);

int main()
{
    char result[7];
    rgb(23, 79, 255, result);

    return 0;
}

int rgb(int r, int g, int b, char *output)
{
    convert_to_hex(r, 1, output);
    convert_to_hex(g, 3, output);
    convert_to_hex(b, 5, output);
    *(output + 6) = '\0';

    return 0;
}

int convert_to_hex(int r, int index, char *output)
{
    if (r < 1)
    {
        *(output + index) = '0';
        *(output + index - 1) = '0';
    }
    else if (r > 255)
    {
        *(output + index) = 'F';
        *(output + index - 1) = 'F';
    }
    else
    {
        char syms[] = "ABCDEF";
        int i = 0;
        while (r)
        {
            int rem = r % 16;
            if (rem < 10)
                *(output + index) = rem + 48;
            else
                *(output + index) = syms[rem - 10];
            r /= 16;
            index--;
        }
        if (index == 0 || index == 2 || index == 4)
            *(output + index) = 48;
    }
    return 0;
}
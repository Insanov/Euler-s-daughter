#include <stdbool.h>
#include <stdio.h>

bool is_pangram(const char *str_in);
int is_letter_in(char letter, const char *str);

int main()
{
    char phrase[] = "The quick, brown fox jumps over the lazy dog!";

    is_pangram(phrase);

    return 0;
}

bool is_pangram(const char *str_in)
{
    char aplhabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; aplhabet[i]; i++)
    {
        if (0 == is_letter_in(aplhabet[i], str_in))
            return false;
    }
    return true;
}

int is_letter_in(char letter, const char *str)
{
    for (int i = 0; str[i]; i++)
        if (tolower(str[i]) == letter)
            return 1;
    return 0;
}
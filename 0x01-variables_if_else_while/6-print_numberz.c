#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 10)
    {
        putchar(i + 48); // ASCII value of '0' is 48
        i++;
    }

    putchar('\n');

    return (0);
}

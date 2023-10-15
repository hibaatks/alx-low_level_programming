#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts separated by a comma, followed by space, and numbers should be printed in order.
 * @n: input
 */
void print_to_98(int n)
{
    int count;

    if (n <= 98)
    {
        for (count = n; count <= 98; count++)
        {
            printf("%d", count);

            if (count < 98)
            {
                printf(", ");
            }
        }
    }
    else
    {
        for (count = n; count >= 98; count--)
        {
            printf("%d", count);

            if (count > 98)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
}

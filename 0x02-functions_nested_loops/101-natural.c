#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function to print the times table up to n
 * @n: the number up to which to print the times table
 */
void print_times_table(int n)
{
    if (n >= 0 && n <= 15) // Adjust the range as needed
    {
        int i, j, result;

        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                result = i * j;
                if (j == 0)
                    printf("%d", result);
                else
                    printf(", %d", result);
            }
            printf("\n");
        }
    }
}

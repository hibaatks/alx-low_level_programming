#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts in order, separated by a comma and space.
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

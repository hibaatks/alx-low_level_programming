#include <stddef.h>

int _putchar(char c); // Declare the _putchar function

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            if (n < 98)
            {
                _putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
                _putchar(','); // Print comma
                _putchar(' '); // Print space
            }
            else
            {
                _putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
            }
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            if (n > 98)
            {
                _putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
                _putchar(','); // Print comma
                _putchar(' '); // Print space
            }
            else
            {
                _putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
            }
            n--;
        }
    }

    _putchar('\n'); // Print a newline character
}

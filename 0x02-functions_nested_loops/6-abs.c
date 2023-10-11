#include <unistd.h>

/**
 * _abs - Compute the absolute value of an integer
 * @n: The integer to find the absolute value of
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
    if (n < 0)
    {
        n = -n;
    }

    return n;
}

/**
 * _putchar - Write a character to the standard output (stdout)
 * @c: The character to write
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

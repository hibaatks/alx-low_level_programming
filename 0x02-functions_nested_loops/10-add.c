#include <unistd.h>  /* Included for the write() function */

/**
 * _putchar - Writes a character to the standard output (file descriptor 1).
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written. On error, -1 is returned.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * add - Adds two integers.
 * @a: The first integer to be added.
 * @b: The second integer to be added.
 *
 * Return: The result of adding a and b.
 */
int add(int a, int b)
{
	return a + b;
}

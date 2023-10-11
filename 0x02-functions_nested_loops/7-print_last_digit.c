#include <unistd.h>

int _putchar(char c);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The input number
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
	}
	else
	{
		last_digit = n % 10;
	}

	_putchar('0' + last_digit);
	return last_digit;
}

int main(void)
{
	int last;

	last = print_last_digit(98);
	_putchar('\n');
	last = print_last_digit(0);
	_putchar('\n');
	last = print_last_digit(-13);
	_putchar('\n');

	return (0);
}

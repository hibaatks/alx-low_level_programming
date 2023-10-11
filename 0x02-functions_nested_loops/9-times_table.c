#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result >= 10)
            {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }
            else
            {
                if (j != 0)
                    _putchar(' ');
                _putchar(result + '0');
            }
        }
        _putchar('\n');
    }
}

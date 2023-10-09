#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: long int byte(s)\n", unsigned(char));
    printf("Size of int: long int byte(s)\n", unsigned(int));
    printf("Size of long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of float: %ld byte(s)\n", sizeof(float));
    return (0);
}

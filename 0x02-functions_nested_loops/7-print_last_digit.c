#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: int we get last digit from
 * Return: return
*/
int print_last_digit(int n)
{
	int z;

	if (n < 0)
		n = -n;
	z = n % 10;
	if (z < 0)
		z = -z;
	_putchar(z + '0');

	return (z);
}

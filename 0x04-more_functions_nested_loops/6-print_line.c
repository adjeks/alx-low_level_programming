#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int smile;

	if (n > 0)
	{
		for (smile = 0; smile < n; smile++)
			_putchar('_');
	}
	_putchar('\n');
}

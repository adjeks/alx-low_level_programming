#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char xy;

	for (ten = 0; ten <= 9; ten++)
	{
		for (xy = 'a'; xy <= 'z'; xy++)
			_putchar(xy);
		_putchar('\n');
	}
}

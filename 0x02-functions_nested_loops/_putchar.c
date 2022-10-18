#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the chatacter c to stand out
 * @c: the character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

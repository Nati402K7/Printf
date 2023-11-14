#include "main.h"

/**
 * character - A function that prints character.
 * @c: input character
 * Return: 1
 */

int character(va_list c)
{
	char i;

	i = va_arg(c, int);
	_putchar(i);

	return (1);
}

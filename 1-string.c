#include "main.h"

/**
 * string - A function that prints string
 * @s: input string
 * Return: string length
 */

int string(va_list s)
{
	char *i;
	int j, k;

	i = va_arg(s, char *);

	if (i == '\0')
	{
		i = "(null)";
		k = _strlen(i);

		for (j = 0; j < k; j++)
			_putchar(i[j]);

		return (k);
	}
	else
	{
		k = _strlen(i);

		for (j = 0; j < k; j++)
			_putchar(i[j]);

		return (k);
	}
}

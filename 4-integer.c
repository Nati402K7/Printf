#include "main.h"

/**
 * integer - A function that prints integer
 * @i: input integer
 * Return: num
 */

int integer(va_list i)
{
	int v = va_arg(i, int);
	int j, k = v % 10, l, m = 1;
	int num = 1;

	v = v / 10;
	j = v;

	if (k < 0)
	{
		_putchar('-');
		j = -j;
		v = -v;
		k = -k;
		num++;
	}

	if (j > 0)
	{
		while (j / 10 != 0)
		{
			m = m * 10;
			j = j / 10;
		}
		j = v;

		while (m > 0)
		{
			l = j / m;
			_putchar(l + '0');
			j = j - (l * m);
			m = m / 10;
			num++;
		}
	}
	_putchar(k + '0');

	return (num);
}

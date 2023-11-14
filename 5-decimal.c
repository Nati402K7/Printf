#include "main.h"

/**
 * decimal - A function that prints decimal
 * @d: input decimal
 * Return: num
 */

int decimal(va_list d)
{
	int v = va_arg(d, int);
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

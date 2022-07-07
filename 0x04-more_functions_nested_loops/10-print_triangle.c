#include "main.h"

/**
 * print_triangle - print a triangle aligned right, using '#'
 *
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	int c, m, n;

	c = 0;
	m = size - 1;

	while (c < size)
	{
		m = size - 1 - c;

		n = c + 1;

		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		while (n > 0)
		{
			_putchar('#');

			n--;
		}
		_putchar('\n');

		c++;
	}

	if (size <= 0)
		_putchar('\n');
}

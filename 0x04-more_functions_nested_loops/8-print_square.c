#include "main.h"

/**
 * print_square - print a square
 *
 * @size: takes in the size of the square
 */

void print_square(int size)
{
	int x, z;

	if (size <= 0)

		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (z = 0; z < size; z++)

			_putchar('#');

		_putchar('\n');

	}
}

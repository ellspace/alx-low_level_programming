#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 *
 * @n: Integer amount of _
 */

void print_line(int n)
{
	char p;

	for (p = 0; p < n; p++)

		_putchar('_');

	_putchar('\n');

}

#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *
 * @str: the string.
 *
 */
void puts2(char *str)
{

	int n;
	int m;

	for (n = 0 ; str[n] != '\0' ; n++)

	{

		;

	}

	for (m = 0 ; m < n ; m = m + 2)
	{

		_putchar(str[m]);
	}
	_putchar('\n');
}

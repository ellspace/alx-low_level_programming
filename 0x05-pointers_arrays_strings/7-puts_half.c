#include "main.h"

/**
 * puts_half - a script that prints half of a given string
 *
 * @str: the string to print half
 */
void puts_half(char *str)
{

	int n = 0;
	int m;


	while (str[n] != '\0')
	{

		n++;

	}
	if (n % 2 == 0)
	{

		n = n / 2;

	}
	else
	{

		n = (n + 1) / 2;

	}
	while (str[n] != '\0')
	{

		m = str[n];
		n++;
		_putchar(m);
	}
	_putchar('\n');
}

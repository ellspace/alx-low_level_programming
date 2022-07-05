#include "main.h"


/**
 * print_last_digit - prints the last digit
 * @x: integer input
 * Return: last digit
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}

}


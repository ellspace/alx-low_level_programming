#include "main.h"
/**
 * _isalpha - checks for lower and uppercase character
 *@c: character variable
 * Return: 1
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

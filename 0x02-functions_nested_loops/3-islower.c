#include "main.h"


/**
 *_islower -  a function that checks for lowercase character.
 *@c: my character variable
 *Return: 0 if true and 1 if false
 */


int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}

	_putchar('\n');


}

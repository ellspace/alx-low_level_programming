#include "main.h"


/**
 *_islower -  a function that checks for lowercase character.
 *@c: my character variable
 *Return: 1 if true and 0 if false
 */


int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');


}

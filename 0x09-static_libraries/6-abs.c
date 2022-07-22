#include "main.h"

/**
 * _abs - computes the absolute value of integers
 * @a: character variable
 * Return: Always 0 (Success)
 */


int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}

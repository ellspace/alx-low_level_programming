#include "main.h"
#include <stdio.h>


/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: Factorial Integer
 *
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		else if (n == 1)
			return (1);
		return (factorial(n - 1) * n);
	}
}

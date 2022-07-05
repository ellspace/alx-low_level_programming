#include <stdio.h>
#include "main.h"

/**
 * print_alphabets - prints alphabets in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar("\n");

	return (0);


}

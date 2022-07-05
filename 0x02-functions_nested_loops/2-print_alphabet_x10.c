#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char alphab;

	while (num < 10)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
		_putchar('\n');
		num++;

	}
}

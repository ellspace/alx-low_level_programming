#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int g;

	for (g = 0; g <= 9; g++)
		putchar(g + '0');
	putchar('\n');

	return (0);

}

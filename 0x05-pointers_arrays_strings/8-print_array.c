#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n times the elements
 *
 * @a: the pointer to the elements
 * @n: times to print elements
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0 ; m < n ; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
		{

			printf(", ");

		}

	}

	putchar('\n');

}

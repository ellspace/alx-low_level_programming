#include <stdio.h>

/**
 * main - to print fiboncci
 *
 * Return: always 0
 */


int main(void)
{
	unsigned int x = 1, y = 2, z = 3, v = 2, s;

	for (s = 2; s <= 32; s++)
	{
		if (z % 2 == 0)
		{
			v = v + z;
			x = y;
			y = z;
			z = x + y;
		}
	}
		printf("%u\n", v);
		return (0);

}

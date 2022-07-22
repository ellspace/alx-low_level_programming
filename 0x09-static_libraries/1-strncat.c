#include "main.h"


/**
 * _strncat - function to concatenate two strings and return a new string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of characters to include.
 *
 * Return: character pointer
 */
char *_strncat(char *dest, char *src, int n)
{

	int a = 0, m = 0;
	char *k;

	while (*(dest + a) != '\0')
		a++;
	while (!(*(src + m) == '\0' || m == n))
	{

		*(dest + a) = *(src + m);
		a++;
		m++;

	}

	*(dest + a) = '\0';
	k = dest;
	return (k);
}

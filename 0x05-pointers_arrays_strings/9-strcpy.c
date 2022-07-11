#include "main.h"

/**
 * _strcpy - a function that copies a string
 *
 * @dest: the returns
 * @src: receiver
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m;

	while (src[n] != '\0')
	{

		n++;

	}
	m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}

	m = m;

	while (m <= n)
	{
		dest[m] = '\0';

		m++;
	}
	return (dest);
}

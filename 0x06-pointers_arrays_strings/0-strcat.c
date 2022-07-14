#include "main.h"


/**
 * _strcat -a function that concatenate two strings and return a new string
 *
 * @dest: string 1
 * @src: string 2
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{

	int n = 0, m = 0;
	char *k;

	while (*(dest + n) != '\0')
		n++;
	while (*(src + m) != '\0')
	{

		*(dest + n) = *(src + m);
		n++;
		m++;

	}
	*(dest + n) = '\0';
	k = dest;
	return (k);
}

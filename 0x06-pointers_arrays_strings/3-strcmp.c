#include "main.h"


/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{

		++s1;
		++s2;

	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

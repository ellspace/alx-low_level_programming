#include <stdio.h>
#include "main.h"

/**
 *rev_string - a function that reverses a string.
 *
 *@s: value.
 *
 *Return: 0
 */
void rev_string(char *s)
{
	int b = 0;
	int l = 0;
	char *y = s;
	int a = 0;
	int c;
	char n;

	while (*y != '\0')
	{
		y++;
		b++;
	}
	l = b - 1;
	for ( ; a < ((l / 2) + 1) ; a++)
	{
		c = (l - a);
		n = s[a];
		s[a] = s[c];
		s[c] = n;
	}
}

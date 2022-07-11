#include <stdio.h>
#include "main.h"

/**
 *rev_string - update value.
 *
 *@s: value to be evaluate.
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int b = 0;
	int l = 0;
	char *y = s;
	int a = 0;
	int l;
	char n;

	while (*y != '\0')
	{
		y++;
		b++;
	}
	l = b - 1;
	for ( ; a < ((l / 2) + 1) ; a++)
	{
		l = (l - a);
		n = s[a];
		s[a] = s[l];
		s[l] = n;
	}
}

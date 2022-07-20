#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion -F that finds the length of a string
 *
 * @s: pointer to strng
 *
 * Return: length of strng
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * Palindrome_Rsv - F that checks if two chars of a string are equal
 *
 * @s: strng to be checked
 * @a: 1 index
 * @b: last index
 *
 * Return: 1 if equal, else 0
 **/

int Palindrome_Rsv(char *s, int a, int b)
{
	if (a == b)
		return (1);
	if (a == b - 1)
		return (s[a] == s[b]);
	if (s[a] != s[b])
		return (0);
	return (Palindrome_Rsv(s, a + 1, b - 1));
}

/**
 * is_palindrome -F that checks if a string is a palindrome
 *
 * @s: pointer to strig
 *
 * Return: 1 if string is palindrome  else 0
 **/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
		return (0);
	return (Palindrome_Rsv(s, 0, len - 1));
}

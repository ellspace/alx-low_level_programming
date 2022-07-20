#include "main.h"
#include <stdio.h>



/**
 * primenumber -a functionthat checks if a given number is prime
 *
 * @a: ginumber
 * @b: checker number
 *
 * Return: 1 if number is prime else 0
 **/

int primenumber(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0)
		return (0);
	return (primenumber(a, b - 1));

}
/**
 * is_prime_number - checks if a given number is prime
 *
 * @a: given number
 *
 * Return: 1 if number is prime else 0
 **/
int is_prime_number(int a)
{
	if (a <= 1)
		return (0);
	return (primenumber(a, a / 2));
}

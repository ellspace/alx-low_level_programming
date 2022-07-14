#include "main.h"


/**
 *reverse_array - revereses an array of intengers
 *
 *@a: pointer to the array.
 *@n: no of elements of the array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{

		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;

	}

}

#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 *more headers goes there
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);

}

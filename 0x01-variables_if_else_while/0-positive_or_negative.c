#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - contains if statements for required responses
 * n - randomly assigned integer
 *
 * Return: 0 if it works
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Here is my code */

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

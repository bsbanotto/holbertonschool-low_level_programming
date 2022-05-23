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
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Here is my code */

	lst = n % 10;

	if (lst > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	if (lst == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst);
	if (lst < 6 && lst != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	return (0);
}

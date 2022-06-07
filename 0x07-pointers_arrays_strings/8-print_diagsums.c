#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sums both TL to BR and TR to BL diagonals of a square array
 * @a: passed in integers
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_tl_br = 0;
	int sum_tr_bl = 0;

/*
 * For sum_tl_br - starts at top left, ends at bottom right
 * first is zero, and go to size + 1 until counter = size
 */
	for (i = 0; i < size * size; i = i + size + 1)
		sum_tl_br += a[i];
/*
 *	printf("top left to bottom right sum is: %d\n", sum_tl_br);
 */

/*
 * For sum_tr_bl - starts at top right, ends at bottom left
 * first i is size - 1, then i = i + size - 1
 * run while i < size * size -1. If we do size * size, we get the value from
 * the following row added in
 */
	for (i = size - 1; i < size * size - 1; i = i + size - 1)
		sum_tr_bl += a[i];
/*
 *	printf("top right to bottom left sum is: %d\n", sum_tr_bl);
 */

/*
 * I used this section to figure out how to return what I wanted
 *	int i;
 *	for(i = 0; i < size; i++)
 *		printf("%d\n", size);
 *	printf("%d\n", a[8]);
 */
	printf("%d, %d\n", sum_tl_br, sum_tr_bl);
}

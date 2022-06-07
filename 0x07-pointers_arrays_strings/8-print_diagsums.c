#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sums both TL to BR and TR to BL diagonals of an array
 * @a: passed in integers
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int row, col;
	int sum_tl_br = 0;
	int sum_tr_bl = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			printf("%d\n", a[row][col]);
			sum_tl_br += a[row][col];
		}
	}

	for (row = 0; row < size; row++)
	{
		for (col = size; col > 0; col--)
		{
			sum_tr_bl += a[row][col];
		}
	}
	printf("%d, %d\n", sum_tl_br, sum_tr_bl);
}

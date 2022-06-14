#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the number of arguments passed into it
 * @argc: Count of arguments passed into function
 * @argv: Array of arguments passed into function
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}

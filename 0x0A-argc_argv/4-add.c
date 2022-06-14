#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints sum of all positive integers passed into a program
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 when successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
			j++;
		}
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		j++;
	}
	printf("%d\n", sum);
	return (0);
}

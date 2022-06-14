#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Returns the multiple of two numbers
 * @argc: Count of arguments passed in
 * @argv: Array of arguments passed in
 *
 * Return: 0 for successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}

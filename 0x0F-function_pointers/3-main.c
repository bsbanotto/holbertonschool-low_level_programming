#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main function to do math
 * @argc: Input from user: execution, int, operator, int
 * @argv: Vector to argument array
 *
 * Return: Result of math operation
 */

int main(int argc, char *argv[])
{
	int number1, number2;
	char *mathOperator;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	mathOperator = argv[2];
	number2 = atoi(argv[3]);

	func_ptr = get_op_func(mathOperator);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func_ptr(number1, number2));

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - main function that prints its own name
 * @argc: Count of arguments passed
 * @argv: Array of passed arguments
 *
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

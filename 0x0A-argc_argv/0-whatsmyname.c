#include "main.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * main - main function that prints its own name
 * @argc: Count of arguments passed
 * @argv: Array of passed arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

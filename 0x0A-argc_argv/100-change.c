#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Returns the number of coins required to make change
 * @argc: Count of arguments passed into function
 * @argv: Array of arguments passed into function
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int numquarter = 0;
	int numdime = 0;
	int numnickel = 0;
	int numtwopenny = 0;
	int numpenny = 0;
	int change;
	int sum = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		change = atoi(argv[1]);
		numquarter = change / 25;
		change -= numquarter * 25;
		numdime = change / 10;
		change -= numdime * 10;
		numnickel = change / 5;
		change -= numnickel * 5;
		numtwopenny = change / 2;
		change -= numtwopenny * 2;
		numpenny = change / 1;
		sum = numquarter + numdime + numnickel + numtwopenny + numpenny;
		printf("%d\n", sum);
		return (0);
	}
}

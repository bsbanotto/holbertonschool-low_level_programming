#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts number in given string to an integer
 * @s: Provided string
 *
 * Return: Integer value of number string
 */

int _atoi(char *s)
{
	int i, num, sign, output;

	sign = 1;
	output = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (sign == -1)
			{
				output *= 10;
				num = (s[i] - '0');
				output -= num;
			}
			else
			{
				output *= 10;
				num = (s[i] - '0');
				output += num;
			}
		}
		if ((s[i] >= '0' && s[i] < '9') && (s[i + 1] < '0' || s[i + 1] > '9'))
			break;
	}
	return (output);
}

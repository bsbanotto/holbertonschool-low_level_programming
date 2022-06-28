#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - prints given numbers followed by new line
 * @separator: String to separate each number
 * @n: defined quantity of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	if (n > 0)
	{

		if (separator == NULL)
		{
			for (i = 1; i < n; i++)
			{
				printf("%d", va_arg(numbers, int));
			}
		}
		if (separator != NULL)
		{
			for (i = 1; i < n; i++)
			{
				printf("%d%s", va_arg(numbers, int), separator);
			}
		}
		for (i = n; i <= n; i++)
		{
			printf("%d\n", va_arg(numbers, int));
		}

		va_end(numbers);
	}
}

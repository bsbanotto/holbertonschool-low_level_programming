#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints given strings
 * @separator: String to be printed between strings
 * @n: number of strings passed to function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);

	if (separator == NULL)
	{
		for (i = 1; i < n; i++)
		{
			printf("%s", va_arg(strings, char *));
		}
	}
	if (separator != NULL)
	{
		for (i = 1; i < n; i++)
		{
			printf("%s%s", va_arg(strings, char *), separator);
		}
	}
	for (i = n; i <= n; i++)
	{
		printf("%s\n", va_arg(strings, char *));
	}

	va_end(strings);
}

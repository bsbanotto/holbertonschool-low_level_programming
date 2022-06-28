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
	char *s;

	if (n == 0)
		printf("\n");

	va_start(strings, n);

	for (i = 0; i < (n - 1); i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if (separator != NULL)
			printf("%s", separator);
	}
	for ( ; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
	}
	printf("\n");

	va_end(strings);
}

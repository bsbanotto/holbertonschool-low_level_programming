#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_char - Prints characters
 * @list: list of char values
 *
 * Return: void
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints intigers
 * @list: list of int values
 *
 * Return: void
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Prints floats
 * @list: list of float values
 *
 * Return: void
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Prints strings
 * @list: list of string values
 *
 * Return: void
 */
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s", s);
}


/**
 * print_all - Prints all arguments passed to the function
 * @format: List of all types of arguments passed to function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list list;
	char *separator = "";

	chosen_type data_type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (data_type[i].option != '\0')
		{
			if (data_type[i].option == format[j])
			{
				printf("%s", separator);
				data_type[i].func(list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(list);
	printf("\n");
}

#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name of person
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name && *f)
	{
		f(name);
	}
}

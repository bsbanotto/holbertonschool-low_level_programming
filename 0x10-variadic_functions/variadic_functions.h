#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Prototypes */

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

int _putchar(char c);


/**
 * struct choice - Choice structure
 * @option: letter passed in first argument
 * @func: pointer to appropriate function
 */

typedef struct choiceStruct
{
	char choice1;
	void (*func)(va_list);
} choiceStruct;

#endif

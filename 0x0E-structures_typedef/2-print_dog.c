#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: structure to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age != d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);

}

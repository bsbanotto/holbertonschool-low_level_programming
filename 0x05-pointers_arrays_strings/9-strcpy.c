#include "main.h"

/**
 * *_strcpy - Function to copy string pointed to by src to dest
 *
 * @dest: Where the string goes
 * @src: Where the string started
 *
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}

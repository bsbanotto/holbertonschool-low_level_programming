#include "main.h"

/**
 * is_palindrome - Function to check if a string is a palindrome
 * @s: Provided string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	return (palindrome_check(s, s));
}

/**
 * palindrome_check - Compares forward and backward string
 * @s1: forward provided string
 * @s2: backward provided string
 *
 * Return: 1 if palindrome, 0 if not
 */

void palindrome_check(char *s1, char *s2)
{
	if(*s1)
	{
		putchar(*s1);
		palindrome_check(s1, s1 + 1);
	}
	if(*s2)
	{
		palindrome_check(s2, s2 + 1);
		putchar(*s2);
	}
}

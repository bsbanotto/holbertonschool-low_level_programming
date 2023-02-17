#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	printf("%s\n", str);
	for(i = 0; i <= 7; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
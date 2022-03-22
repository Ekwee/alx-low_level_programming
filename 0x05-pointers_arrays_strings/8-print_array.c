#include "main.h"
#include <stdio.h>

/**
 * print_array - print a specific  no of elemetns of an array
 * @a: a pointer
 * @n: a parameter
 */

void print_array(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	 a++;
while (a >= 0)
{
	_putchar(s[a]);
	a--;
}

_putchar('\n');
}

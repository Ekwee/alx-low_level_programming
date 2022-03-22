#include "main.h"

/**
 * print_rev - a func that prints a string in reverse
 * @s: a parameter that holds a string
 */

void print_rev(char *s)
{
	int len, a;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	a = len - 1;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
		_putchar('\n');
}

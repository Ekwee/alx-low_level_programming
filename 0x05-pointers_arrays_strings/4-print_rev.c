#include "main.h"

/**
 * print_rev - a func that prints a string in reverse
 * @s: a parameter that holds a string
 */

void print_rev(char *s)
{
	int a =;

	while (s[a])
		a++;

	for (a = a -1; a >= 0; a--)
	{
		_putchar(s[a]);

		_putchar('\n');
	}

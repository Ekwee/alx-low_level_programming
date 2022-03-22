#include "main.h"

/**
 * print_rev - a func that prints a string in reverse
 * @s: a parameter that holds a string
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] !='\0')
	{
		a++;
	}
	a--;
        while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}

		_putchar('\n');
}

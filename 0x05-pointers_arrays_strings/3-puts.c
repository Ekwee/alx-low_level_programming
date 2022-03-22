#include "main.h"

/**
 * _puts - a functions that prints a string
 * @str: a parameter that holds a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

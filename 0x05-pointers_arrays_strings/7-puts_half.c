#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: holds the string
 */

void puts_half(char *str)
{
	int len = 0;
	int a, b;

	while (str[len])
		len++;

	if (len % 2 == 0)
		a = len / 2;
	else
		a = (len + 1) / 2;
	for (b = a; b < len; i++)
		_putchar(str[b]);

	_putchar('\n');
}

#include "main.h"

/**
 * print_line - prints a line
 * @n: line lenght
 */
void print_line(int n);

void print_line(int n)
{
	int i = 0;

	if (n > 0)
{
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
else if (n <=0)
	_putchar('\n');
	}

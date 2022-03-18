#include "main.h"

/**
 * print_diagonal- function that draws a line
 * @n: length of line
 *
 */

void print_diagonal(int n);

void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

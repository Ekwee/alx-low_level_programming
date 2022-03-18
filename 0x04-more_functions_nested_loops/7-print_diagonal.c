#include "main.h"

/**
 * print_diagonal- function that draws a line
 * @n: length of line
 *
 */

void print_diagonal(int n);

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			b = a;

			for (; b != 0; b--)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else if (n <= 0)
		_putchar('\n');
}

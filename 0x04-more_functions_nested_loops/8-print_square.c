#include "main.h"

/**
 * print_square - function that prints a square
 * @size: measurements of the square (l *w)
 */
void print_square(int size);

void print_square(int size)
{
	int a, b;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

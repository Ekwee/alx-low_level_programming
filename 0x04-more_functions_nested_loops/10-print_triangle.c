#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle measurements
 */
void print_triangle(int size);

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for(a = 0; a < size; a++)
		{
			b = a;
			for( b = 0; b < size - 1; b++)
			{
				_putchar(' ');
			}

			for ( c = 0; c < size - b + 1; c++)
				_putchar('\n');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

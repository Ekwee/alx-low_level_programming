#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		i++;
		char s = 'a';

		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
	}
}

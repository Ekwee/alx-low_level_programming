#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char s = 'a';
	while (i < 10)
	{
		s = 'a';

		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		i++;
	}
}

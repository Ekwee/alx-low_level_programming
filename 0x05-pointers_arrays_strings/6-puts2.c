#include "main.h"

/**
 * puts2 print every other character of as string
 * @str : parameter holding a string
 */

void puts2(char *str)
{
	int s = 0;

	while (str[s])
	{
		if (s % 2 == 0 || s == 0)
			_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}

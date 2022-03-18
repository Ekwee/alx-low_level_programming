#include "main.h"
/**
 * more_numbers - print 0 to 14 with a new line after
 */
void more_numbers(void);

void more_numbers(void)
{
	int l, m = 0 , n = 48;
	while (m < 10)
	{
		for (l = 48; l <= 57; l++)
			_putchar(l);
		for (l = 49; (n <= 52) && (n >= 48); n++)
		{
			_putchar(l);
			_putchar(n);
		}
		m++;
	}
}

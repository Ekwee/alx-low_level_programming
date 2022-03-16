#include "main.h"

/**
 * print_sign - prints sign based on number input
 *
 * Returns: 1 & + for n > 0 , 0 & 0 for n = 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if ( n == 0)
	{
		return(0);
		_putchar('0');
	}
	else (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}


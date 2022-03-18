#include "main.h"

/**
 * largest_number - get the largest no.
 * @a: firstno
 * @b: second no
 * @c: third no
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a>= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

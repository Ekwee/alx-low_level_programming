#include "main.h"

/**
 * swap_int - func to swap the numbers
 * @a: parameter one
 * @b: parameter two
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

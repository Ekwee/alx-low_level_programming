#include "main.h"
#include <stdio.h>

/**
 * print_array - print a specific  no of elemetns of an array
 * @a: a pointer
 * @n: a parameter
 */

void print_array(int *a, int n)
{
	int s = 0;

	for (; s < n; s++)
	{
		printf("%d", *(a + s));
		if (s != (n - 1))
		printf(", ");
	}
	printf("\n");
}

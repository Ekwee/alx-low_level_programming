#include "main.h"
#include <stdio.h>

/**
 * print_array - print a specific  no of elemetns of an array
 * @a: a pointer
 * @n: a parameter
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}

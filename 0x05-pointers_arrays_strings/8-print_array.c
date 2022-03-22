#include "main.h"
#include <stdio.h>

/**
 * print_array - print a specific  no of elemetns of an array
 * @a: a pointer
 * @n: a parameter
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n -1)
		{
			printf(",");
			printf(" ");
		}
	}

        printf("\n");
}

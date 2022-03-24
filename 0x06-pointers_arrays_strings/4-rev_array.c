#include "main.h"
/**
 * reverse_array - a func that reverses an array
 * @a: array pointer
 * @n: elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s, b;

	n = n -1;
	b = 0;
	while (b <= n)
	{
		s = a[b];
		a[b++] = a[n];
		a[n--] = s;
	}
}

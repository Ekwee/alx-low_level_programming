#include "main.h"

/**
 * rev_string - a func that reverses a string
 * @s: a parameter that holds the string
 * Return: returns a string in reverse
 */

void rev_string(char *s)
{
	int a, b, c, d;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	c = a - 1;

	while (b < c)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
		b++;
		c--;
	}
}

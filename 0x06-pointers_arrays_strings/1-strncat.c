#include "main.h"
/**
 * _strncat - a func that concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}



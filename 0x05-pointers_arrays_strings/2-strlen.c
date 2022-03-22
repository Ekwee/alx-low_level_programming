#include "main.h"

/**
 * _strlen - a func to return string length
 * @s: parameter containing our string
 * Return: returns the string length
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}

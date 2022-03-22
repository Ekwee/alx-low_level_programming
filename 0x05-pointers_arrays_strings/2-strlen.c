#include "main.h"
#include <stdio.h>

/*
 * _strlen - a func to return string length
 * @s: parameter containing our string
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

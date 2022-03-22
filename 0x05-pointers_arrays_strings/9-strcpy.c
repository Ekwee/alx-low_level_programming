#include "main.h"

/**
 * _strcpy - a func that copies a string pointed by src
 * @dest: pointer of the return value
 * @str: pointer of the string
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest  = *a;
		dest++;
		src++;
	}

	*dest = '\0';
	return (a);
}

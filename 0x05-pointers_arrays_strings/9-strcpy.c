#include "main.h"

/**
 * _strcpy - a func that copies a string pointed by src
 * @dest: pointer of the return value
 * @src: pointer of the string
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
	   dest[a] = *(src + a);
	}

	dest[a] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strcat - a func that concatenates two strings.
 * @src: a string
 * @dest: a string
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, len;
	
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (a = 0; src[a] != '\0'; a++, len++)
	{
		dest[len] = src[a];
	}
	dest[len] = '\0';
	return (dest);
}

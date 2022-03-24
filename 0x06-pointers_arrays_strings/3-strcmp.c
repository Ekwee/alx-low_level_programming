#include "main.h"

/**
 * _strcmp - a func that compares two strings
 * @s1: first string
 * @s2: second string
 */
int _strcmp(char *s1, char *s2)
{
	int a, val;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}

	val = s1[a] - s2[a];
	return (val);
}

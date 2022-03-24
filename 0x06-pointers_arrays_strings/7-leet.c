#include "main.h"

/**
 * leet - a func that encodes a string to 1337
 * @s: input string
 * Return:  dest
 */

char *leet(char *s)
{
	int a = 0, i;
	int low[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int no[] = {52, 51, 48, 55, 49};

	while(*(s + a) != '\0')
	{
		for ( i = 0; i < 5; i++)
		{
		if (*(s + a) == low[i] || *(s + a) == upper[i])
		{
			*(s + a) = no[i];
			break;
		}
		}
		a++
	}

	return (s);
}

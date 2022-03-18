#include "main.h"

/**
 * _isupper - checks for uppercase
 *
 * @c: input character
 *
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if ( c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

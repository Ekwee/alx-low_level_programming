#include "main.h"

/**
 * _isalpha - checks alphabetic character
 *int s - a variable
 * Return: 1 if it is true
 */

int _isalpha(int s)
{
	if (s >= 'a' && s <= 'z')
	{
		return (1);
	}
	else if (s >= 'A' && s <= 'Z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

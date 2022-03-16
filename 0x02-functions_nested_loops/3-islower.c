#include "main.h"

/**
 * _islower - func to tell a values case
 *
 * Return: 1 for sucess and 0 for failure
 */

int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isdigit - checks for a digit
 * Return: either 1 if digit or 0
 * @c: parameter used
 */
int _isdigit(int c);

int _isdigit(int c)
{
	if ( c < 48 || c > 57)
		return (0);
	else
		return(1);
}

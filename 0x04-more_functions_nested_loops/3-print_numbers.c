#include "main.h"

/**
 * print_number - function to print numbers
 * Return: Always 0
 * 
 */
void print_numbers(void);

void print_numbers(void)
{
	int i = 0;

	while ( i < 10 )
	{
		_putchar("%d", i);
		i++;
	}
	_putchar("\n")
}

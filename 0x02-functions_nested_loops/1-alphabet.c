#include "main.h"

/**
 * main - check your code 
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char letter = 'a';

while(letter <='z')
{
	_putchar(letter);
	letter++;
}
_putchar('\n');
}

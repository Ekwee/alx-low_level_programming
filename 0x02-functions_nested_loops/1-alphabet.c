#include "main.h"

/**
 * print_alphabet - allows us to print the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
_putchar('\n');
}

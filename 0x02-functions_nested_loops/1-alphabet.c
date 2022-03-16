#include "main.h"

/**
 * main - now print_alphabet
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

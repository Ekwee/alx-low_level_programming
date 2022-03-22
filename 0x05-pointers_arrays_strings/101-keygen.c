#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - used to generate a keygen
 * Return: sucees
 */

int main(void)
{
	int a, b = 0;

	srand(time(NULL));

	while (b <= 2645)
	{
		a = rand() % 128;
		b += a;
		printf("%c", a);
	}
	printf("%c\n", 2772 - b);

	return (0);
}

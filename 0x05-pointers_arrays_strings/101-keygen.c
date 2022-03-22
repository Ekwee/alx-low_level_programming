#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - used to generate a keygen
 * Return: sucees
 */

int main(void)
{
	int a = 0, b = 0;
	time_t p;

	srand(unsigned int) time(&p));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%c", a);
	}
	printf("%c \n", (2772 - b));
	return (0);
}

#include <stdio.h>
/**
 * main - print all singlt digits numbers of base ten
 * putchar : creates a new line
 * Return - (0) success 
 */
int main(void)
{ 
	int n;
	for(n = 48; n < 58; n++)
		putchar(n);
	putchar ('\n');
	return(0);
}

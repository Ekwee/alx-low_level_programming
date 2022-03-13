#include <stdio.h>
/**
 * main : can print all singlt digits numbers of base 10 from 0
 * putchar : creates a new line
 * return (0) 
 */
int main(void)
{ int n;
	for(n=48; n<58; n++){
		putchar(n);
	}
	putchar('\n');
	return(0);
}

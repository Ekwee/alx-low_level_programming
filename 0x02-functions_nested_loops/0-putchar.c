#include "main.h"

/**
 * main - the begining of our script to print _putchar
 * char s[8]represent our string array
 *return (0) 
 */
int main(void)
{
	char s[8] ="_putchar";
	int i;
     	for(i = 0 ; i <8; i++)
	{
         _putchar(s[i]);
        }	   
        _putchar('\n');
	return (0);
}

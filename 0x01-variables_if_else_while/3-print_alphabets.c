#include <stdio.h>
/* more headers goes there */

/**
 * This function prints the alphabet first in lower case and then in upper case
 * Return: The function returns 0 when evrything has worked well.
 */
int main() 
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; ++c)
		putchar(c);
	putchar('\n');
	return 0;
}

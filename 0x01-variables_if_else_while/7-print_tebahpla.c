#include <stdio.h>
/**
*  main - this function prints the alphabet in reverse order
*  Return: The values returned is 0 is all works well
*/
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}

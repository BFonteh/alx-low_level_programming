#include <stdio.h>
/* Include the stndard input output library */
/**
*  This function prints numbers in base 16 with letters in lowercase
*  Return: the return value is 0 if everything works fine
*/
int main(void)
{
	char c;
	for (c = '0' ; c <= '9' ; c++)
		putchar(c);
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

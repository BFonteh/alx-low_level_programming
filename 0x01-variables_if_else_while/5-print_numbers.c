#include <stdio.h>
/**
 * main - this function prints the numbers from
 * 0 to 9 followed by a new line
 * Return: The function returns 0 when evrything has worked well.
 */

int main(void)

{
	int c = 0;

	for ( ; c <= 9 ; c++)
		printf("%i", c);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/* Include the standard input output library header file */
/**
* This function prints the possible combinations of numbers from 0 to 9
* Return: the function returns 0 when all is well
*/
int main(void)
{
	int c = 0;
	for (; c <= 8 ; c++)
	{
		putchar(c+'0');
		putchar(',');
		putchar(' ');

	}
	putchar(9+'0');
	putchar('\n');
}

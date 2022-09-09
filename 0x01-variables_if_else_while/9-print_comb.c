#include <stdio.h>
/* Include the standard input output library header file */
/**
* This function prints the possible combinations of numbers from 0 to 9
* Return: the function returns 0 when all is well
*/
int main(void)
{
	int c = 0;
	for (; c <= 9 ; c++)
	{
		putchar(c+'0');
		if (c==9)
			break;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
}

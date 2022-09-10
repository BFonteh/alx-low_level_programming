#include <stdio.h>
/**
* main - this functions prints the numbers from 0
* through 9 using puctchar() only
* Return: the function returns 0 if evrything works well
*/
int main(void)
{
	int c = 0;

	for (; c <= 9 ; c++)
		putchar(c + '0');
	putchar('\n');
	return (0);
}

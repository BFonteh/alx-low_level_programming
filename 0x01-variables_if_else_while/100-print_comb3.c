#include <stdio.h>
/**
* main - the function prints all the possible
* combinations of 2 digit numbers
* Return: The function returns 0 if all is well
*/
int main(void)
{
	int i,j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = i + 1 ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i == 8) && (j == 9))
				break;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}

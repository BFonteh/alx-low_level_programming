#include <stdio.h>

/**
 *  This function prints the possible combinations of 3 digits numbers
 *  Return: The return value is 0 when the function runs well
 */
int main(void)
{
	int i,j,k;
	for (i = 0 ; i <= 7 ; i++)
	{
		for (j = i+1 ; j <= 8 ; j++)
		{
			for (k = j+1 ; k <= 9 ; k++)
			{
				putchar(i+'0');
				putchar(j+'0');
				putchar(k+'0');
				if ((i==7) && (j==8) && (k==9))
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);	

}

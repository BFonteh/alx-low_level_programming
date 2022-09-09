#include <stdio.h>
/* Include the header file to handle standard input and output */

/**
* This function prints all the possible combinations of 2 digits numbrs less than 100
* Return: the return value of this function is 0 is all works well.
*/
int main(void)
{
	int i,j,k,l;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = i ; k <=9 ; k++)
			{	for (l = 0 ; l <= 9 ; l++)
				{	if ((l <= j) && (j != 0))
					{
						continue;
					}
					putchar(i+'0');
					putchar(j+'0');
					putchar(' ');
					putchar(k+'0');
					putchar(l+'0');
					if ((i==9) && (j==8) && (k==9) && (l==9))
						break;
					putchar(',');
					putchar(' ');
					
				}
			}	
		}
	}
	putchar('\n');
	return (0);
}

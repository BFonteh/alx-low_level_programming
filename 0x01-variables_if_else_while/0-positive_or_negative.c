#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function prints random number with some conditions
 * Return - Returns 0 when all is well
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{	
	printf("%d is positive\n", n);
	
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else 
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

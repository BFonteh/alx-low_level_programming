#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
cat > 101-keygen.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}

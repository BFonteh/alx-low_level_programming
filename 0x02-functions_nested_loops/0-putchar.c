#include<stdio.h>
/**
 * main - This functions priints putchar
 * Return: Returns 0 when  all works well
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

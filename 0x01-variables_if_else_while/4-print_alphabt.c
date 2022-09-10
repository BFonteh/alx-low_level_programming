#include <stdio.h>
/**
* main - this function prints the alphabet in
* lower case except e and q
* Return: The function returns 0 when evrything has worked well.
*/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'e') || (c == 'q'))
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - This function prints the alphabet first in lower case and then upper
 * Return: The function returns 0 when evrything has worked well.
 */
int main(void)

{

char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
++c;
}

putchar('\n');
return (0);

}

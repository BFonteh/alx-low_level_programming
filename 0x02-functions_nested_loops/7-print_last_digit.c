
#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs(n % 10);
	_putchar(lastDigit + '0');
	return (lastDigit);
}

#include "main.h"

/**
 *print_last_digit - function prints last digit
 *
 *@n: function input
 * Return: int
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}

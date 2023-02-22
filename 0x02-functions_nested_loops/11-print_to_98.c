#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that print number to 98
 *
 * @n: function input
 *
 * Return: the list of numbers
 */

int main (void)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			--n;
		}
	}
	printf("98\n");
	return (0);
}

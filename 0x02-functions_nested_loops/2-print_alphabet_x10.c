#include "main.h"

/**
 * print_alphabet_x10 - function will print alphabets int ten lines
 */

void print_alphabet_x10(void)
{
	int i, chr;

	for (i = 0; i <= 9; i++)
	{
		for (chr = 'a'; chr <= 'z'; ++chr)
			_putchar(chr);
		_putchar('\n');
	}
}

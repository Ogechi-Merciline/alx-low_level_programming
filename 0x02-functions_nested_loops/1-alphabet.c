#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase letter
 * it also utilize putchar function
 */

void print_alphabet(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; ++chr)
		_putchar(chr);
	_putchar('\n');

}

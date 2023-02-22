#include "main.h"
/**
 * _islower - Checks the character c if its lowercase
 *
 *
 * @c: checks input of the function
 * Return: Return 1 if its lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

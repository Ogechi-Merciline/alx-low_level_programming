#include "main.h"

/**
 * _isalpha - Function that check for letter or otherwise
 *
 * @c: function input
 *
 * Return: Returns 1 for letter or 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

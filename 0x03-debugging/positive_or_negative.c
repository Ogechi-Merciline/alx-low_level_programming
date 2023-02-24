#include "main.h"
/**
 * positive_or_negative - checks for positive or negative number
 * @i: the number to be checked
 * Return: 0 (success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("% is positive", i);
}

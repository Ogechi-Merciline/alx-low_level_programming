#include <stdio.h>

/**
 * main - prints all combinations of two two digits
 * numbers should be separated by a space,
 * they should range from 0 to 99 and they should be printed in two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 00; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar (' ');
		}
	}

	putchar('\n');

	return (0);
}

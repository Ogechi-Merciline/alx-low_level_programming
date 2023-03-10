#include "main.h"

/**
 * main - Entry point
 *
 * Description: program prints first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, fibb;
	int i;

	printf("%ld, %ld, ", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		fibb = num1 + num2;
		printf("%ld", fibb);
		if (i != 50)
			printf(", ");
		num1 = num2;
		num2 = fibb;
	}
	printf("\n");
	return (0);
}

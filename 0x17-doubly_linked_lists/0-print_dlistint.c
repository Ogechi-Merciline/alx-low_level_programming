#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 * @h - pointer to the list_t list to print
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h);
{
	const dlistint_t *h = h;
	size_t h = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (h);
}

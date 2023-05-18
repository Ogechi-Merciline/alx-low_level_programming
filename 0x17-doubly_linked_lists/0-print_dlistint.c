#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 * print_list - prints elements of a linked list
 * @h - pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}

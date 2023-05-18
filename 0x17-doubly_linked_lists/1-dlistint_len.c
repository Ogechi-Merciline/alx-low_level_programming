#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @prev: points to the previous node
 * @next: points to the next node
 * Description: doubly linked list node structure
 * main - check the code
 * print_list - prints elements of a linked list
 * @h - pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

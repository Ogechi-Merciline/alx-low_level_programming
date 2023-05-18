#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * struct dlistint_s - doubly linked list
 * @index - Is the index of the node, starting from 0
 * @head - pointer to the dlistint_t list
 * Description: returns the nth node of a dlistint_t linked list.
 * Return:if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
{
	if (count == index)
{
	return (current);
}

current = current->next;
count++;
}

return (NULL);
}

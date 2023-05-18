#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * struct dlistint_s - doubly linked list
 * @head - pointer to the dlistint_t list
 * @idx - index of the list where the new node should be added
 * Description:function that inserts a new node at a given position
 * Returns: the address of the new node
 * or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
	{
		return (NULL);
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)

	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	dlistint_t *current = *h;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
			{
				current->next->prev = new-node;
			}
			current->next = new_node;
			return (new_node);
		}

		current = current->next;
		count++;
	}

	free(new_node);
	return (NULL);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * @delete_dnodeint_at_index - function
 * description : function deletes node at index index of a dlistint_t linked list
 * @index - index of the node that should be deleted
 * @head :
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
{
	return (-1);
}

dlistint_t *current = *head;

if (index == 0)
{
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(current);
	return (1);
}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @prev: points to the previous node
 * @next: points to the next node
 * @new_node: points to the new node at the end of list
 * Description: new node at the beginning of a dlistint_t list
 * main - check the code
 * @h - pointer to the list_t list to print
 * Return: the address of the new element
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}

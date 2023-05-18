#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * struct dlistint_s - doubly linked list
 * @free dlistint - frees dlistint_t list
 * @head - double point to the dlistint_t list
 * Description: frees a dlistint_list
 * Return: (success)
 */

void free_dlistint(dlistint_t *head)
{
		dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * struct dlistint_s - doubly linked list
 * @head - pointer to the dlistint_t list
 * @sum_dlistint - sum of the data
 * Description: returns sum of all the data (n) of a dlistint_t linked list.
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
{
	sum += current->n;
	current = current->next;
}

return (sum);
}

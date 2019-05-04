#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Free memory mallocs from double linked list
 * @head: List of elements
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		while (current->prev != NULL)
		{
			current = current->prev;
			free(current->next);
		}
		free(current);
	}
}

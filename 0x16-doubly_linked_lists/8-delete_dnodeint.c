#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node in nth position of double linkedlist
 * @head: List elements
 * @index: Position of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	while (head != NULL && current != NULL)
	{
		if (index == count)
		{
			if (index == 0)
			{
				if (current->prev == NULL && current->next == NULL)
				{
					*head = NULL;
					free(current);
					return (1);
				}
				current->next->prev = NULL;
				*head = current->next;
				free(current);
				return (1);
			}
			if (index > 0 && current->next != NULL)
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
				return (1);
			}
			if (current->next == NULL)
			{
				current->prev->next = NULL;
				free(current);
				return (1);
			}
		}
		current = current->next;
		count++;
	}
	return (-1);
}

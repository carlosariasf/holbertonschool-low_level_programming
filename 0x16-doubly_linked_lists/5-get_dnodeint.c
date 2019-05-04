#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a double linked list
 * @head: List elements
 * @index: Index of node to return
 * Return: expected node or null if not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (index == count)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}

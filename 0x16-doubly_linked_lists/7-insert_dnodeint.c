#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node in nth position of double linkedlist
 * @h: List elements
 * @idx: Position to insert the node
 * @n: Value to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *current = *h;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL || new == NULL)
		return (NULL);
	new->n = n; 
	if (*h == NULL)
	{
		new->prev = NULL, new->next = NULL, *h = new;
		return (new);
	}
	while (h != NULL && *h != NULL && current != NULL)
	{
		if (idx == count)
		{
			if (idx == 0)
			{
				free(new);
				return (add_dnodeint(h, n));
			}
			if (idx > 0 && current->next != NULL)
			{
				new->prev = current->prev, current->prev->next = new;
				new->next = current, current->prev = new;
				return (new);
			}
			if (current->next == NULL)
			{
				new->prev = current->prev, current->prev->next = new;
				current->prev = new, new->next = current;
				return (new);
			}
		}
		current = current->next;
		count++;
	}
	free(new);
	return (NULL);
}

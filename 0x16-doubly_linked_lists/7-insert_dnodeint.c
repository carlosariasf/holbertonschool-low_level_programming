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
	dlistint_t *new;
	dlistint_t *current = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while (current)
	{
		if (idx == count)
		{
			if (idx == 0)
			{
				new->next = current;
				current->prev = new;
				*h = new;
				return (new);
			}
			if (idx > 0 && current->next != NULL)
			{
				current->prev->next = new;
				current->next->prev = new;
				new->prev = current->prev;
				new->next = current;
				return (new);
			}
			if (current->next == NULL)
			{
				new->prev = current;
				current->next = new;
				return (new);
			}
		}
		current = current->next;
		count++;
	}
	return (NULL);
}

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
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
		}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx - 1 > 0; idx--)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}
	new->next = current->next;
	if (new->next != NULL)
		new->next->prev = new;
	new->prev = current;
	current->next = new;

	return (new);
}

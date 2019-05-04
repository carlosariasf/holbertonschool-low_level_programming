#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Return number of elements in a double linked list
 * @h: List elements
 * Return: int with Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

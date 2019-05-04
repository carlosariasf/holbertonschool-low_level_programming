#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Print elements of a double linked list
 * @h: List elements
 * Return: int with Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}

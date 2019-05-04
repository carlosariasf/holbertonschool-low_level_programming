#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all nodes in a double linked list
 * @head: List elements
 * Return: Sum of data in all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		count += current->n;
		current = current->next;
	}
	return (count);
}

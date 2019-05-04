#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - Add new node at beginning of a double linked list
 * @head: List of elements
 * @n: Value to add to linked list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;
	const int number = n;

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = current;
		current->prev = new;
		*head = new;
	}

	return (new);
}

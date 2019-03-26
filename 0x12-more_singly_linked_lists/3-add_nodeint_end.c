#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * add_nodeint_end - List
 * @head: pointer
 * @n: string
 * Return: Address of new node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	if (last_node != NULL)
	{
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	}
	else
		last_node = new_node;
return (new_node);
}

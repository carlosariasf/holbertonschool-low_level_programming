#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
	/**
	* insert_dnodeint_at_index - inserts a new node at a given position
	* @h: dlistint_t pointer to head
	* @idx: index of the new node
	* @n: data to be filled in the new node
	* Return: head.
	*/
	dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
	{
	dlistint_t *cur_node = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	if (!h)
		return (0);
	if (!new_node)
		return (0);
	new_node->n = n;
	if (!*h)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
		}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx - 1 > 0; idx--)
	{
		if (!cur_node)
		{
			free(new_node);
			return (0);
		}
		cur_node = cur_node->next;
	}
	new_node->next = cur_node->next;
	if (new_node->next)
		new_node->next->prev = new_node;
	new_node->prev = cur_node;
	cur_node->next = new_node;
	return (new_node);
	}

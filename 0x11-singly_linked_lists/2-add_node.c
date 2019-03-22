#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - List
 * @head: pointer
 * @str: string
 * Return: Address of new node
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node != NULL)
	{
	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len++;
	*head = new_node;
	return (new_node);
	}

return (NULL);
}

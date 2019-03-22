#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

unsigned int size_string(char *str);
/**
 * add_node_end - List
 * @head: pointer
 * @str: string
 * Return: Address of new node
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = size_string((char *)str);
		new_node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

return (new_node);
}
/**
 * size_string - Array
 * @str: Size of array
 * Return: Size string
**/
unsigned int size_string(char *str)
{
unsigned int i;

for (i = 0; str[i] != '\0'; i++)
;
return (i);
}

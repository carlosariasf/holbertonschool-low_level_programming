#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

unsigned int size_string(char *str);
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
		if (str != NULL)
		{
			new_node->str = strdup(str);
			new_node->next = *head;
			new_node->len = size_string((char *)str);
			*head = new_node;
		}
	return (new_node);
	}

return (NULL);
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

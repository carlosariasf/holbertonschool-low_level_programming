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
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
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

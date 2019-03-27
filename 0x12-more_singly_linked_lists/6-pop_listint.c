#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * pop_listint - List
 * @head: pointer
 *
 * Return: Size
**/
int pop_listint(listint_t **head)
{
listint_t *curr;
int i = 0;

if (*head != NULL)
{
	curr = *head;
	i = curr->n;
	*head = (*head)->next;
	free(curr);
	return (i);
}
return (0);
}

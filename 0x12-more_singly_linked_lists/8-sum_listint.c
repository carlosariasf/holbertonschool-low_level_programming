#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * sum_listint - List
 * @head: pointer
 *
 * Return: index node
**/
int sum_listint(listint_t *head)
{
listint_t *curr = head;
int i = 0;

if (curr != NULL)
{
	while (curr)
	{
		i += curr->n;
		curr = curr->next;
	}
	return (i);
}

return (0);
}

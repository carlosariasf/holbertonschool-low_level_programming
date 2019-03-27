#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_listint2 - List
 * @head: pointer
 *
 * Return : Size
**/
void free_listint2(listint_t **head)
{
listint_t *curr;
if (head == NULL)
	return;
while (*head != NULL)
{
	curr = (*head)->next;
	free(*head);
	*head = curr;
}
}
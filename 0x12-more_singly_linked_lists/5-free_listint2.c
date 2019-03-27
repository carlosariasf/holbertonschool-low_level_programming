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
listint_t *curr = *head;
listint_t *temp = NULL;
if (head == NULL)
	return;
while (curr)
	{
	temp = curr->next;
	free(curr);
	curr = temp;
	}
*head = NULL;
}

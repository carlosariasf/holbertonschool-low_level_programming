#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - List
 * @head: pointer
 *
 * Return : Size
**/
void free_listint2(listint_t **head)
{
listint_t *current = *head;

while (current)
	{
	current = current->next;
	free(current);
	}
free(*head);

}

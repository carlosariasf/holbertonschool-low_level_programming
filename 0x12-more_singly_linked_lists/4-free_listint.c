#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - List
 * @head: pointer
 *
 * Return : Size
**/
void free_listint(listint_t *head)
{

listint_t *current = NULL;

while (head)
	{
	current = head->next;
	free(head);
	head = current;
	}
current = NULL;

}

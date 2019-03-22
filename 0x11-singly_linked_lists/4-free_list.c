#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - List
 * @head: pointer
 *
 * Return : Size
**/
void free_list(list_t *head)
{

list_t *current = NULL;

while (head)
	{
	current = head->next;
	free(head->str);
	free(head);
	head = current;
	}
current = NULL;

}


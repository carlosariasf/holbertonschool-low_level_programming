#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

int countN(const list_t *head);
/**
 * list_len - List
 * @h: pointer
 *
 * Return: Size
**/
size_t list_len(const list_t *h)
{

return (countN(h));
}
/**
 * countN - Count number of nodes
 * @head: Pointer to head of linked list
 * Return: number of nodes
**/
int countN(const list_t *head)
{
	int count = 0;
	const list_t *current = head;

	while (current != NULL)
	{
	count++;
	current = current->next;
	}
	return (count);
}

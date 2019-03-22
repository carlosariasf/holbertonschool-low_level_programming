#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

int countN(const list_t *head);
/**
 * print_list - List
 * @h: pointer
 *
 * Return: Size
**/
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	
	if (current.str == NULL)
		printf("[0] (nil)");
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
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

#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

int countN(const listint_t *head);
/**
 * print_listint - List
 * @h: pointer
 *
 * Return: Size
**/
size_t print_listint(const listint_t *h)
{
int a = 0, b;
const listint_t *current = h;

b = countN(h);

	while (a < b)
	{
		printf("%d\n", current->n);
		current = current->next;
		a++;
	}

return (b);
}
/**
 * countN - Count number of nodes
 * @head: Pointer to head of linked list
 * Return: number of nodes
**/
int countN(const listint_t *head)
{
	int count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
	count++;
	current = current->next;
	}

	return (count);
}

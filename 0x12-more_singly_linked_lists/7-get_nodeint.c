#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * get_nodeint_at_index - List
 * @head: pointer
 * @index: int
 * Return: index node
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *curr;
unsigned int i = 0;

curr = head;
while (curr != NULL)
{
	if (index == i)
		return (curr);
curr = curr->next;
i++;
}

return (NULL);
}

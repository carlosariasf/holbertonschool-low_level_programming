#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - List
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: index node
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *curr;

if (head == NULL)
	return (NULL);
node = malloc(sizeof(listint_t));
if (node == NULL)
	return (NULL);
node->n = n;
if (*head == NULL)
{
	node->next = NULL;
	*head = node;
	return (node);
}
else if (idx == 0)
{
	node->next = *head;
	*head = node;
	return (node);
}
curr = *head;
while (idx - 1 > 0)
{
	curr = curr->next;
	idx--;
	if (curr == NULL)
	{
		free(node);
		return (NULL);
	}

}
node->next = curr->next;
curr->next = node;

return (node);
}

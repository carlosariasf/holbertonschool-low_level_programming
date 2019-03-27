#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - List
 * @head: pointer
 * @index: index
 * Return: index node
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *nextn;
unsigned int i = 0;

temp = *head;
if (*head == NULL)
	return (-1);
if (index == 0)
{
	*head = (temp)->next;
	free(temp);
	return (1);
}
while (temp != NULL && i < index - 1)
{
	temp = temp->next;
	i++;
}
if (temp == NULL || temp->next == NULL)
	return (-1);
nextn = temp->next->next;
free(temp->next);
temp->next = nextn;
return (1);
}

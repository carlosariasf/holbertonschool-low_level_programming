#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_listint_safe - List
 * @head: pointer
 * Return: index node
**/
size_t print_listint_safe(const listint_t *head)
{
unsigned int i;

if (head == NULL)
	exit (98);

while (head)
{
	i++;
}

return (i);
}

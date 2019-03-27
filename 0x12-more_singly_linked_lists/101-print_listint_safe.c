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
while (head)
{
i++;
}

return (i);
}

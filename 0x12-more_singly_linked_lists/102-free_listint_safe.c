#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_listint_safe - List
 * @h: pointer
 * Return: index node
**/
size_t free_listint_safe(listint_t **h)
{
unsigned int i = 0;

while (*h)
{
free(*h);
i++;
}

return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_listint - List
 * @h: pointer
 *
 * Return: Size
**/
size_t print_listint(const listint_t *h)
{
unsigned int a = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	a++;
}

return (a);
}

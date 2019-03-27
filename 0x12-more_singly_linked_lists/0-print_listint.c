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
int a = 0;
const listint_t *current = h;


	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		a++;
	}

return (a);
}

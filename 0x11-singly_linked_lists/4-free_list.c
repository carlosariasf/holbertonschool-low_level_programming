#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - List
 * @head: pointer
 *
 * Return : Size
**/
void free_list(list_t *head)
{
free(head);
}


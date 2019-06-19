#include "sort.h"
/**
* cocktail_sort_list - Cocktail sort algorithm
* @list: Double linked list with ints
**/
void cocktail_sort_list(listint_t **list)
{
	listint_t *aux = NULL;
	int flag = 1;

	if (list)
		aux = *list;
	else
		return;
	while (flag == 1)
	{
		flag = 0;
		while (aux->next != NULL)
		{
			if (aux->n > aux->next->n)
			{
				swap_node(list, aux, aux->next);
				print_list(*list);
				flag = 1;
			}
			else
				aux = aux->next;
		}
		while (aux->prev != NULL)
		{
			if (aux->n < aux->prev->n)
			{
				swap_node(list, aux->prev, aux);
				print_list(*list);
				flag = 1;
			}
			else
				aux = aux->prev;
		}
	}
}
/**
* swap_node - Change items
* @list: Array
* @aux1: Position 1
* @aux2: Position 2
**/
void swap_node(listint_t **list, listint_t *aux1, listint_t *aux2)
{
	if (aux1->prev == NULL && aux2->next == NULL)
	{
		*list = aux2;
		aux2->prev = NULL;
		aux1->next = NULL;
		aux2->next = aux1;
		aux1->prev = aux2;
	}
	else if (aux1->prev == NULL)
	{
		aux2->prev = NULL;
		aux2->next->prev = aux1;
		aux1->next = aux2->next;
		aux2->next = aux1;
		aux1->prev = aux2;
		*list = aux2;
	}
	else if (aux2->next == NULL)
	{
		aux1->next = NULL;
		(aux1->prev)->next = aux2;
		aux2->next = aux1;
		aux2->prev = aux1->prev;
		aux1->prev = aux2;
	}
	else
	{
		(aux1->prev)->next = aux2;
		(aux2->next)->prev = aux1;
		aux1->next = aux2->next;
		aux2->prev = aux1->prev;
		aux1->prev = aux2;
		aux2->next = aux1;
	}
}

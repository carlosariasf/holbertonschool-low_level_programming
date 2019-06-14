#include "sort.h"
/**
 *
 *
 *
 *
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	listint_t *aux2 = NULL;

        while (aux->next != NULL)
        {	            
		if (aux->n > aux->next->n)
		{		
			swap_node(aux, aux->next);
			print_list(*list);
			aux2 = aux;
			while (aux2->prev != NULL)
			{
				if (aux2->n > aux2->prev->n)
				{
					swap_node(aux2->prev, aux2);
					print_list(*list);
				}
				else
					break;
				aux2 = aux2->prev;
			}
		}
        }
} 


void swap_node(listint_t *aux1, listint_t *aux2)
{
	(aux1->prev)->next = aux2;
	(aux2->next)->prev = aux1;
	aux1->next = aux2->next;
	aux2->prev = aux1->prev;
	aux1->prev = aux2->next = aux1;
}


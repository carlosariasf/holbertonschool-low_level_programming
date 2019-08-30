#include "search_algos.h"
#include <math.h>
/**
 * jump_list - jump search algorithm
 * @list: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0, b, j;
	listint_t *tmp = list;

	if (!list)
		return (NULL);
	b = sqrt(size);
	while (list->index < size && list->next != NULL)
	{
		if (list->n >= value)
		{
			list = tmp;
			break;
		}
		idx = list->index + b;
		tmp = list;
		for (j = 0; j < idx; j++)
			if (list->next != NULL)
				list = list->next;
		printf("Value checked array[%d] = [%d]\n",
			(int)list->index, list->n);

	}
	printf("Value found between indexes [%d] and [%d]\n",
		(int)idx, (int)(b + idx));
	b = idx - b;
	while (list->index >= b && size > b && list->next != NULL)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}

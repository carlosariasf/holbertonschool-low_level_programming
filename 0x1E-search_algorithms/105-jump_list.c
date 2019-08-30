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
	while (tmp->index < size)
	{
		if (tmp->index >= value)
			break;
		printf("Value checked array[%d] = [%d]\n",
			(int)idx, tmp->n);
		idx = tmp->index + b;
		for (j = 0; j < idx; j++)
			tmp = tmp->next;
	}
	printf("Value found between indexes [%d] and [%d]\n",
		(int)(idx - b), (int)idx);
	b = idx - b;
	while (tmp->index >= b && size > b)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int)b, tmp->n);
		if (tmp->index == value)
			return ((int) b);
		b++;
	}
	return (NULL);
}

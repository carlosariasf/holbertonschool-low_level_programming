#include "search_algos.h"
/**
 * linear_skip - linear search algorithm
 * @list: List
 * @value: value to search
 * Return: index of coincidence or -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	int i = 0;

	if (!list)
		return (NULL);
	while (list->next)
	{
		printf("Value checked array[%d] = [%d]\n", i, (int)list->n);
		if ((int)list->n == value)
			return (list);
		list = list->next;
		i++;
	}
	return (NULL);
}

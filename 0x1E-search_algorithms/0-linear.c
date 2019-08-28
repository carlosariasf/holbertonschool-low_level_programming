#include "search_algos.h"
/**
 * linear_Search - linear search algorithm
 * array: List
 * size: size of array
 * value: value to search
 * Return: index of coincidence or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

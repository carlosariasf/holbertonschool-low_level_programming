#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search algorithm
 * @array: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, b;

	if (!array)
		return (-1);
	b = sqrt(size);
	while (idx < size)
	{
		if (array[idx] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n",
			(int)idx, array[idx]);
		idx = idx + b;
	}
	printf("Value found between indexes [%d] and [%d]\n",
		(int)(idx - b), (int)idx);
	b = idx - b;
	while (idx >= b && size > b)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int)b, array[b]);
		if (array[b] == value)
			return ((int) b);
		b++;
	}
	return (-1);
}

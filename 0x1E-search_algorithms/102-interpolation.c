#include "search_algos.h"
/**
 * interpolation_search - interpolation search algorithm
 * @array: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
		return (-1);
	while (1)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) *
			(value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%d] is out of range\n",
				(int) pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n",
			(int) pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}

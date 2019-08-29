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
	size_t idx = 0, b = sqrt(size);

	if (!array)
		return (-1);
	while (array[MIN(b, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx = b, b = b + sqrt(size);
		if (idx > size)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				(int)(idx - sqrt(size)) + 1, (int)idx);
			printf("Value checked array[%d] = [%d]\n",
				(int)(idx - sqrt(size)) + 1, array[(int)idx - (int)sqrt(size)]);
			return (-1);
		}
	}
	while (array[idx] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx = idx + 1;
		if (idx == MIN(b, size))
			return (-1);
	}
	if (array[idx] == value)
	{
		if (idx > sqrt(size))
		{
			printf("Value found between indexes [%d] and [%d]\n",
				(int)(idx - sqrt(size)) + 1, (int)(b - sqrt(size)) + 1);
			printer(array, (idx - sqrt(size) + 1), (b - sqrt(size)) + 2);
		}
		else if (idx < sqrt(size))
		{
			printf("Value found between indexes [%d] and [%d]\n",
				(int)idx - 1, (int)b), printer(array, idx - 1, b - 1);
		}
		return ((int) idx);
	}
	return (-1);
}
/**
 * printer - print array
 * @array: array
 * @start: index start
 * @finish: index finish
 */
void printer(int *array, size_t start, size_t finish)
{
	size_t i = 0;
	(void) array;

	for (i = start; i < finish; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
	}
}

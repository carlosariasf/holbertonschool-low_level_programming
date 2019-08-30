#include "search_algos.h"
/**
 * binary_search2 - binary search algorithm
 * @array: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
int binary_search2(int *array, size_t l, size_t r, int value)
{
	size_t left = l;
	size_t right = r - 1;
	int pos = 0;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printer(array, left, right + 1);
		pos = (left + right) / 2;
		if (array[pos] < value)
			left = pos + 1;
		else if (array[pos] > value)
			right = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
/**
 * interpolation_search - interpolation search algorithm
 * @array: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (!array)
		return (-1);
	if (size == 0)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int)bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n",
		(int)bound / 2, (int)MIN(bound, size - 1));
	return binary_search2(array, bound/2, MIN(bound + 1, size), value);
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

	printf("Searching in array: ");
	for (i = start; i < finish; i++)
	{
		printf("%d", array[i]);
		if (i < finish - 1)
			printf(", ");
		else
			printf("\n");
	}
}

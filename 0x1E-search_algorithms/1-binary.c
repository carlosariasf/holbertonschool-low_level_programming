#include "search_algos.h"
/**
 * binary_Search - binary search algorithm
 * @array: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
int binary_search(int *array, size_t size, int value) 
{
	size_t left = 0;
	size_t right = size - 1;
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
			right = pos -1;
		else
			return (pos);
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


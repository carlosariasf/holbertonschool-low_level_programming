#include "search_algos.h"
/**
 * jump_search - jump search algorithm
 * @array: List
 * @size: size of array
 * @value: value to search
 * Return: index of coincidence or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	size_t b = sqr(size);

	if (!array)
		return (-1);
	while (array[MIN(b, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx = b;
		b = b + sqr(size);
		if (idx > size)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)(idx - sqr(size)), (int)idx);
			printf("Value checked array[%d] = [%d]\n", (int)(idx - sqr(size)), array[idx - sqr(size)]);
			return (-1);
		}
	}
	while (array[idx] < value)
	{
		idx = idx + 1;
		if (idx == MIN(b, size))
		{
			return (-1);
		}
	}
	if (array[idx] == value)
	{
		if (idx > sqr(size))
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)(idx - sqr(size)), (int)(b - sqr(size)));
			printer(array, (idx - sqr(size)), (b - sqr(size))+ 1);
		}
		else if (idx < sqr(size))
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)idx - 1, (int)b);
			printer(array, idx - 1, b - 1);
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
/**
 * sqr - sqrt of number
 * @n: number
 * Return: sqrt
 */
size_t sqr(size_t n)
{
	size_t sqrt = n / 2;
	size_t tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

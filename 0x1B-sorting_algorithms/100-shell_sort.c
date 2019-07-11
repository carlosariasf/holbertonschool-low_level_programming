#include "sort.h"
/**
 * shell_sort - Shell sort algorithm
 * @array: Array of numbers
 * @size: size of array
**/
void shell_sort(int *array, size_t size)
{
	int n = 1, i = 0, flag = 0, tmp = 0;

	if (size > 1)
	{
		size = size - 1;
		while (n < (int) size / 2)
		{
			n = n * 3 + 1;
		}
		tmp = n;
		for (i = 0; tmp <= (int) size; i++)
		{
			if (array[i] > array[tmp])
			{
				swap_list(array, i, tmp);
				flag = 1;
			}
			tmp++;
			if (flag == 1 && tmp == (int) size + 1)
				i = -1, tmp = n, flag = 0;
			if (flag == 0 && tmp == (int) size + 1)
			{
				if (n > 1)
				{
					n = n / 3;
					i = -1, tmp = n, flag = 0;
				}
				print_array(array, size + 1);
			}
		}
	}
}
/**
 * swap_list - Change items
 * @array: Array
 * @pos1: Position 1
 * @pos2: Position 2
**/
void swap_list(int *array, int pos1, int pos2)
{
	int tmp = array[pos1];

	array[pos1] = array[pos2];
	array[pos2] = tmp;
}

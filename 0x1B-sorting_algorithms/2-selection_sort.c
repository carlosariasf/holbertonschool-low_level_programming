#include <stdio.h>
#include <stddef.h>
#include "sort.h"

/**
 * selection_sort - Selection Sort Algorithm
 * @array: Array
 * @size: Size of array
 *
**/
void selection_sort(int *array, size_t size)
{
	int flag = 1;
	size_t i = 0, idx = 0, idx2 = 0, tmp = 0;
	
	while (flag == 1 && size > 1)
	{
		flag = 0;
		tmp = idx;
		for (i = idx + 1; i < size; i++)
		{
			if (array[(int) idx] > array[(int) i])
			{
				idx = i;
				idx2 = i;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			swap_list(array, (int) tmp, (int) idx2);
			print_array(array, size);
		}
		if (tmp < size)
			flag = 1;
		idx = tmp + 1;
	}
}

void swap_list(int *array, int pos1, int pos2)
{
	int tmp = array[pos1];
	
	array[pos1] = array[pos2];
	array[pos2] = tmp;
}

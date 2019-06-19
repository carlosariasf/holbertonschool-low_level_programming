#include "sort.h"
/**
 * shell_sort - Shell sort algorithm
 * @array: Array of numbers
 * @size: size of array
**/
void shell_sort(int *array, size_t size)
{
	int sizet = 0, seq = 1, i = 0, tmp = 0, flag = 0;

	if ((int)size < 2)
		return;
	sizet = (int) size - 1;
	while (seq < sizet / 2)
	{
		seq = seq * 3 + 1;
	}
	tmp = seq;
	for (i = 0; tmp <= sizet; i++)
	{
		if (array[i] > array[tmp])
		{
			swap_list(array, i, tmp);
			flag = 1;
		}
		tmp++;
		if (flag == 1 && tmp == sizet + 1)
			i = -1, tmp = seq, flag = 0;
		if (flag == 0 && tmp == sizet + 1)
		{
			if (seq > 1)
			{
				seq = seq / 3;
				i = -1, tmp = seq, flag = 0;
			}
			print_array(array, size);
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

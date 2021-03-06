#include "sort.h"

/**
 * quick_sort_hoare - Algorithm quick_sort
 *@array: array to order
 *@size: size of array
 * Return: Non return
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (size > 1)
		quick_sort_hoare2(array, 0, size - 1, size);
}

/**
 * quick_sort_hoare2 - Algorithm quick_sort
 *@array: array to order
 *@size: size of array
 *@low_pos: low_pos
 *@high_pos: high_pos
 * Return: Non return
 */
void quick_sort_hoare2(int *array, int low_pos, int high_pos, size_t size)
{
	int pivot;

	if (high_pos - low_pos > 0)
	{
		pivot = hoare(array, (int)low_pos, (int)high_pos, size);
		quick_sort_hoare2(array, (int)low_pos, pivot, size);
		quick_sort_hoare2(array, pivot + 1, (int)high_pos, size);
	}
}

/**
 * hoare - partition algorithm
 *@array: array
 *@low_pos: low position
 *@high_pos: high pos
 *@size: size
 * Return: Pivot
 */
int hoare(int *array, int low_pos, int high_pos, size_t size)
	{
		int i, j, pivot;

		i = low_pos - 1;
		pivot = array[low_pos];
		j = high_pos + 1;
		while (1)
		{
			do {
				i++;
			} while (array[i] < pivot);
			do {
				j--;
			} while (array[j] > pivot);
			if (i >= j)
				return (j);
			if (array[i] != array[j])
			{
				swap_list(array, i, j);
				print_array(array, size);
			}
		}
	}

/**
 * swap_list - Swap
 *@array: array
 *@pos1: pos1
 *@pos2: pos2
 * Return: Non return
 */
void swap_list(int *array, int pos1, int pos2)
{
	int tmp = array[pos1];

	array[pos1] = array[pos2];
	array[pos2] = tmp;
}

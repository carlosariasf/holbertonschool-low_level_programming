#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function
 * @array: string
 * @size: size array
 * @cmp: int
 * Return: int
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, j, k = 0;

if (array && cmp)
{
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j == 0)
			k = -1;
		else
			return (i);
	}
}
else
	return (-1);
return (k);
}

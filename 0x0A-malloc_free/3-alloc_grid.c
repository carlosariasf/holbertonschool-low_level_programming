#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Array
 * @width: Pointer string
 * @height: Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/
int **alloc_grid(int width, int height)
{
int i, ii;
int **p;

if (width <= 0 || height <= 0)
	return (NULL);
if ((p = malloc(sizeof(int *) * height)) == NULL)
	return (NULL);
for (i = 0; i < height; i++)
	if ((p[i] = malloc(sizeof(int) * width)) == NULL)
		return (NULL);
for (i = 0; i < height; i++)
	for (ii = 0; ii < width; ii++)
		p[i][ii] = 0;

return (p);
}

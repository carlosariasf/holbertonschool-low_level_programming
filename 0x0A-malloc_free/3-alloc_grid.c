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
int *p2;

if (width <= 0 || height <= 0)
	return (NULL);
p = (int **)malloc(sizeof(int *) * height);
p2 = (int *)malloc(sizeof(int) * width);
if (p == NULL || p2 == NULL)
	return (NULL);
for (i = 0; i < height; i++)
	p[i] = (int *)malloc(sizeof(int) * width);
for (i = 0; i < height; i++)
	for (ii = 0; ii < width; ii++)
		p[i][ii] = 0;
free(p2);
return (p);
}

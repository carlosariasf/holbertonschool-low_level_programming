#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - Array
 * @width: Pointer string
 * @height: Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/
int **alloc_grid(int width, int height)
{
int i;
int **p;

if (width <= 0 || height <= 0)
	return (NULL);
p = malloc(sizeof(int *) * height);
if (p == NULL)
	return (NULL);
for (i = 0; i < height; i++)
	p[i] = malloc(sizeof(int) * width);

return (p);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Array
 * @grid: Pointer string
 * @height: Content of array
 * Return : Null if size == 0, or Address of pointer if size > 0
**/
void free_grid(int **grid, int height)
{
int **p = grid;

if (p == grid || height > 0)
	printf("%d", height);

}

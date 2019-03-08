#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - Fuction
 * @min: char
 * @max: char
 * Return: char
**/

int *array_range(int min, int max)
{
int *p;

if (min > max)
	return (NULL);
p = malloc(sizeof(int) * 1);
if(p == NULL)
	return (NULL);

return (p);
}

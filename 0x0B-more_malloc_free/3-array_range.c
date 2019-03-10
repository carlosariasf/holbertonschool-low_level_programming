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
int all, i = min, j = 0;
int *p;

if (min > max)
	return (NULL);
else
	all = max - min + 1;

p = malloc(sizeof(int) * (all + 1));
if (p == NULL)
	return (NULL);
while (i <= max)
	{
	p[j] = i;
	i++;
	j++;
	}
p[j] = '\0';

return (p);
}

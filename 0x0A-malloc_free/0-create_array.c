#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - Array
 * @size: Size of array
 * @c: Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/

char *create_array(unsigned int size, char c)
{
int i;
char *p;

p = malloc(sizeof(char) * size);
if (p == NULL || size == 0)
	return (NULL);
for (i = 0; i < (int) size; i++)
	p[i] = c;
return (p);
}

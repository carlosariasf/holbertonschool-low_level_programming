#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - Array
 * @size: Size of array
 * @c: Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/
int size_string(char *str)
{
int i;

if (*str != '\0')
	for(i = 0; str[i] != '\0'; i++)
	;
	return (i);

return (0);
}

char *_strdup(char *str)
{
int i;
int size = size_string(str);
char *p;

p = malloc(sizeof(char) * size);
if (p == NULL || size == 0)
	return (NULL);
for (i = 0; i < (int) size; i++)
	p[i] = str[i];
return (p);
}

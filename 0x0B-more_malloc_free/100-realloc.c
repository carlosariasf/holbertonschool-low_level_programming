#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - Fuction
 * @ptr: char
 * @old_size: char
 * @new_size: char
 * Return: char
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *p = ptr;

if (old_size > new_size)
	return (NULL);
p = malloc(sizeof(int) * 1);
if (p == NULL)
	return (NULL);

return (ptr);
}

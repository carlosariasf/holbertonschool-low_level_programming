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
void *p;

if (new_size > old_size)
{
	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else if (new_size == 0)
	{
		free(p);
		return (NULL);
	}
}
else if (new_size == old_size)
	return (ptr);
free(ptr);
return (p);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - Fuction
 * @b: int
 *
 * Return: test
**/

void *malloc_checked(unsigned int b)
{
unsigned int *p;

p = malloc(sizeof(unsigned int) * b);
if (p == NULL)
{
	free(p);
	exit(98);
}

return (p);
}

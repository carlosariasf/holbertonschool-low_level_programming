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

p = malloc(sizeof(unsigned int) * b + 1);
if (p == NULL)
{
	exit(98);
}

return (p);
}

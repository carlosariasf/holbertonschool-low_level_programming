#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - Fuction
 * @nmemb: char
 * @size: char
 * Return: char
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
	return (NULL);
for (i = 0; i < (size * nmemb); i++)
{
	p[i] = '\0';
}

return ((void *)p);
}

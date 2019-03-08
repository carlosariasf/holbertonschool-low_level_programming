#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - Fuction
 * @nmemb: char
 * @size: char
 * @ : unsigned int
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
for (i = 0; i < nmemb; i++)
{
	p[i] = 0;
}
/**p[i] = '\0';**/

return (p);
}

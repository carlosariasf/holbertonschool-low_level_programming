#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * counter - Counter of items
 * @av: pointer to string
 * Return: Number of items
**/
int counter(char *av)
{
int ii = 0;

	for (ii = 0; av[ii] != '\0'; ii++)
	;

return (ii);
}
/**
 * *argstostr - Array
 * @ac: Pointer string
 * @av: Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/
char *argstostr(int ac, char **av)
{
char *p, *p2;
int i, ii, iii = 0, wd;

if (ac == 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
	wd += counter(av[i]) + 1;
p = malloc(sizeof(char) * wd - 1);
if (p == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
	p2 = av[i];
	for (ii = 0; p2[ii] != '\0'; ii++)
	{
		p[iii] = p2[ii];
		iii++;
	}
p[iii] = '\n';
iii++;
}

return (p);
}

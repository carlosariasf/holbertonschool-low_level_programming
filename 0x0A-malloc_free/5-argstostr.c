#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * counter - Counter of items
 * @av: String pointer
 * Return: number of items
**/
int counter(char *av)
{
int i = 0;

	for (i = 0; av[i] != '\0'; i++)
	;

return (i);
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
	int i, wd = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		wd += counter(av[i]) + 1;
	p2 = *av;
	p = (char *) malloc(sizeof(char) * (wd + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < wd; i++)
	{
		if(p2[i] == '\0')
			p[i] = '\n';
		else
			p[i] = p2[i];
	}
	p[i] = '\0';
 
	return (p);
}

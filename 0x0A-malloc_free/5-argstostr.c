#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - Array
 * @ac: Pointer string
 * @av: Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/
char *argstostr(int ac, char **av)
{
int i = ac;
char **p = av;

if (i > 0)
	return (0);

return (*p);
}

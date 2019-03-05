#include "holberton.h"
#include <stdlib.h>
/**
 * size_string - Array
 * @str: Size of array
 * Return: Size string
**/
int size_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
/**
 * *_strdup - Array
 * @str: Pointer string
 * @ : Content of array
 * Return: Null if size == 0, or Address of pointer if size > 0
**/
char *_strdup(char *str)
{
int i, size;
char *p;
if (str == NULL)
	return (NULL);
size = size_string(str);
p = malloc(sizeof(char) * size);
if (p == NULL)
	return (NULL);
for (i = 0; i <= size; i++)
	p[i] = str[i];
return (p);
}

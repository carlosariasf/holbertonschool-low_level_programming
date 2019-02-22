#include "holberton.h"
/**
 * _strcmp - reset
 *
 * @s1: char
 * @s2: char
 * @n: int
 * Return: int return the size of the char.
**/
int _strcmp(char *s1, char *s2)
{
char *destino = dest;
int i;

for (i = 0; dest[i] != '\0'; dest--)
;
dest++;
for (i = 0; i < n && *dest != '\0'; i++)
{
	*dest = *src;
	dest++;
	src++;
}
for (i = 0; i < n && *dest == '\0'; i++)
{
	*dest = '*';
	dest++;
}

return (destino);
}

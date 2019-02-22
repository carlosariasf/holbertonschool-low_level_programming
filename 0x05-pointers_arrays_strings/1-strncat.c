#include "holberton.h"
/**
 * *_strncat - reset
 *
 * @dest: char
 * @src: char
 * @n: int
 * Return: char return the size of the char.
**/
char *_strncat(char *dest, char *src, int n)
{
char *destino = dest;
int i;

for (i = 0; dest[i] != '\0'; dest++)
;

for (i = 0; *src != '\0' && i < n; i++)
	{
	*dest = *src;
	dest++;
	src++;
	}

return (destino);
}

#include "holberton.h"
/**
 * *_strncopy - reset
 *
 * @dest: char
 * @src: char
 * @n: int
 * Return: char return the size of the char.
**/
char *_strncpy(char *dest, char *src, int n)
{
char *destino = dest;
int i;

for (i = 0; dest[i] != '\0'; dest--)
;
dest++;
for (i = 0; i < n; i++)
	{
	*dest = *src;
	dest++;
	src++;
	}

return (destino);
}

#include "holberton.h"
/**
 * *_strncpy - reset
 *
 * @dest: char
 * @src: char
 * @n: int
 * Return: char return the size of the char.
**/
char *_strncpy(char *dest, char *src, int n)
{
char *destino = dest;
int s, a;

for (s = 0; src[s] != '\0'; s++)
;
for (a = 0; a < n; a++)
{
	if (a < s)
	{
		*dest = *src;
		dest++;
		src++;
	}
	else
	{
		*dest = '\0';
		dest++;
	}
}

return (destino);
}

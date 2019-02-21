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
char *destino;
char *fuente;
int i;

destino = dest;
fuente = src;

for (i = 0; destino[i] != '\0'; destino++)
;
if (n > 0)
{
for (i = 0; fuente[i] != '\0'; i++)
{
	if (i < n)
	{
	*destino = *fuente;
	destino++;
	fuente++;
	}
}
}
return (dest);
}

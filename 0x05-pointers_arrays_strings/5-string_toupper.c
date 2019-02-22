#include "holberton.h"
/**
 * *string_toupper - reset
 *
 * @*: char
 *
 *
 * Return: char return the size of the char.
**/
char *string_toupper(char *);
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

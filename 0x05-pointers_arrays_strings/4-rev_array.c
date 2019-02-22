#include "holberton.h"
/**
 * reverse_array - reset
 *
 * @a: int
 * @n: int
 *
 * Return : int return the size of the char.
**/
void reverse_array(int *a, int n)
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

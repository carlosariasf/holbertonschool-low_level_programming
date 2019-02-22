#include "holberton.h"
/**
 * *_strcat - reset
 *
 * @*dest: char
 * @*src: char
 *
 * Return : a return the size of the char.
**/
char *_strcat(char *dest, char *src)
{
char *destiny = dest;
int a, c;

for (a = 0; *dest != '\0'; dest++, a++)
;
for (c = 0; *src != '\0'; c++)
{
	*dest = *src;
	dest++;
	src++;
}

return (destiny);
}

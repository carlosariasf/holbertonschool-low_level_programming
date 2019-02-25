#include "holberton.h"
#define NULL 0
/**
 * *_strchr - reset
 * @s: int
 * @c: int
 * Return: char return the size of the char.
**/
char *_strchr(char *s, char c)
{
char *dest;
char *p = NULL;
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
	dest = &s[i];
	break;
	return (p);
}
}

return (dest);
}

#include "holberton.h"
/**
 * *_strchr - reset
 * @s: int
 * @c: int
 * Return: char return the size of the char.
**/
char *_strchr(char *s, char c)
{
char *dest;
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
	{
		dest = &s[i];
		break;
	}
}

return (dest);
}

#include "holberton.h"
/**
 * *_strpbrk - reset
 * @s: int
 * @accept: int
 * Return: char return the size of the char.
**/
char *_strpbrk(char *s, char *accept)
{
int i, ii;

for (i = 0; s[i] != '\0'; i++)
{
	for (ii = 0; accept[ii] != '\0'; ii++)
	{
	if (s[i] == accept[ii])
		return (&s[i]);
	}
}

return (0);
}

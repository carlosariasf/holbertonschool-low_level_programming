#include "holberton.h"
/**
 * *leet - reset
 * @s: int
 * Return: char return the size of the char.
**/
char *leet(char *s)
{
int i, ii;
char let[10] = "aeotlAEOTL";
char cod[10] = "4307143071";

for (i = 0; s[i] != '\0'; i++)
{
	for (ii = 0; ii <= 10; ii++)
	{
		if (let[ii] == s[i])
		{
			s[i] = cod[ii];
		}
	}
}

return (s);
}

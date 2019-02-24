#include "holberton.h"
/**
 * *cap_string - reset
 * @s: int
 * Return: char return the size of the char.
**/
char *cap_string(char *s)
{
int i, ii;
char cap[13] = "\t\n,;.!?\"(){} ";

for (i = 0; s[i] != '\0'; i++)
{
	for (ii = 0; ii <= 13; ii++)
	{
		if (cap[ii] == s[i])
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
			s[i + 1] -= 32;
			}
		}
	}
}

return (s);
}

#include "holberton.h"
/**
 * *rot13 - reset
 * @s: char
 * Return: char return the size of the char.
**/
char *rot13(char *s)
{
int i, ii;
char abc[26] = "ABCDEFGHIJKLMabcdefghijklm";
char nop[26] = "NOPQRSTUVWXYZnopqrstuvwxyz";

for (i = 0; s[i] != '\0'; i++)
{
	for (ii = 0; ii <= 26; ii++)
	{
		if (abc[ii] == s[i])
		{
			s[i] = nop[ii];
		}
		else if (nop[ii] == s[i])
		{
			s[i] = abc[ii];
		}
	}
}

return (s);
}

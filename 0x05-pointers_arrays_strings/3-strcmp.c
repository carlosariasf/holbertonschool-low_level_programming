#include "holberton.h"
/**
 * *_strcmp - reset
 *
 * @s1: char
 * @s2: char
 *
 * Return: int return the size of the char.
**/
int _strcmp(char *s1, char *s2)
{
int s, ss;
int count;
/**int fin = 0;**/

for (s = 0; s1[s] != '\0'; s++)
{
for (ss = 0; ss == s && s2[ss] != '\0'; ss++)
{
if (s1[s] > s2[ss])
{
	count = s1[s] - s2[ss];
}
else
{
	count = s1[s] - s2[ss];
}
}
}

return (count);
}

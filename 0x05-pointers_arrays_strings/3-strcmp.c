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

for (s = 0; s1[s] != '\0'; s++)
;
for (ss = 0; s2[ss] != '\0'; ss++)
;
if (s < ss)
{
	return (-15);
}
else if (s > ss)
{
	return (15);
}

return (0);
}

#include "holberton.h"
/**
 * *_strstr - reset
 * @s: int
 * @accept: int
 * Return: char return the size of the char.
**/
char *_strstr(char *haystack, char *needle)
{
int i, ii;
int count = 0;

for (i = 0; haystack[i] != '\0'; i++)
{
	for (ii = 0; needle[ii] != '\0'; ii++)
	{
	if (haystack[i] == needle[0])
	{
		count++;
		break;
	}
	}
}
if(count != 0)
{
return (&haystack[i + count]);
}

return (0);
}

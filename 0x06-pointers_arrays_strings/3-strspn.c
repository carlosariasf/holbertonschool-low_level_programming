#include "holberton.h"
/**
 * *_strchr - reset
 * @s: int
 * @accept: int
 * Return: char return the size of the char.
**/
unsigned int _strspn(char *s, char *accept)
{
int i, ii, iii;
unsigned int o;

for (i = 0; s[i] != '\0'; i++)
{
	for(ii = 0; accept[ii] != '\0'; ii++)
	{
	if (s[i] == accept[ii])
	{
		o++;
	}
	else
	{
		iii++;
	}
	}

}

return (o);
}

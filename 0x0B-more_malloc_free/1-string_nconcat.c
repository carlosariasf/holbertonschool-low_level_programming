#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - Fuction
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: char
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, ls1 = 0, ls2 = 0, lss = 0;

while (s1[ls1] != '\0')
	ls1++;
while (s2[ls2] != '\0')
	ls2++;
if (n >= ls2)
	lss = ls2;
else
	lss = n;
p = malloc(sizeof(char) * (ls1 + lss) + 1);
if (p == NULL)
	return (NULL);
for (i = 0; i < (ls1 + lss) + 1; i++)
{
	if (i < ls1)
	{
		p[i] = s1[i];
	}
	if (i > ls1)
	{
		p[i - 1] = s2[i - ls1 - 1];
	}
}
p[i] = '\0';

return (p);
}

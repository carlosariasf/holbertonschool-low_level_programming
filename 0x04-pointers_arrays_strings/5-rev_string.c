#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reset
 *
 * @s: char
 *
 * Return : a return the size of the char.
**/
void rev_string(char *s)
{
int a;
char *pI = s;
char *pF;

for (a = 0; s[a] != 0; a++)
;
pF = pI + a - 1;

while (pF > pI)
{
	char b = *pI;
	*pI = *pF;
	*pF = b;
	pI++;
	pF--;
}
}

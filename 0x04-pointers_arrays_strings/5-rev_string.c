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
int b;

for (a = 0; s[a] != '\0'; a++)
{
}
for(b = 0; b <= a; b++)
{
int c = s[b];
s[b] = s[a] - b;
s[a] = c;
printf("%s", s);
}

}
